from pathlib import Path

from seeds.creal import (
    CrealMr1SeedSource,
    resolve_default_creal_script,
    resolve_default_csmith_home,
)
from seeds.csmith import CSmithSeedSource
from seeds.criteria import choose_criterion_variables, choose_criterion_variable, write_criteria_file
from seeds.llm_files import LLMFileSeedSource
from seeds.models import SeedCase


def test_seed_case_reports_expected_paths(tmp_path: Path) -> None:
    case = SeedCase(
        seed_id="case_0001",
        generator="csmith",
        case_dir=tmp_path / "case_0001",
        source_name="generated.c",
        source_meta={"generator": "csmith"},
    )

    assert case.seed_path == case.case_dir / "seed.c"
    assert case.criteria_path == case.case_dir / "criteria.json"
    assert case.seed_meta_path == case.case_dir / "seed_meta.json"
    assert case.mutant_path == case.case_dir / "mutant.c"
    assert case.mutation_meta_path == case.case_dir / "mutation_meta.json"


def test_csmith_seed_source_builds_linux_command() -> None:
    source = CSmithSeedSource(
        binary="csmith",
        extra_args=("--no-bitfields", "--max-block-depth", "2"),
    )

    command = source.build_command(Path("/tmp/out/seed.c"))

    assert command == [
        "csmith",
        "--no-bitfields",
        "--max-block-depth",
        "2",
        "--output",
        "/tmp/out/seed.c",
    ]


def test_csmith_seed_source_uses_env_user_options(monkeypatch) -> None:
    monkeypatch.setenv("CSMITH_USER_OPTIONS", "--no-bitfields --max-block-depth 2")

    source = CSmithSeedSource()
    command = source.build_command(Path("/tmp/out/seed.c"))

    assert command == [
        "csmith",
        "--no-bitfields",
        "--max-block-depth",
        "2",
        "--output",
        "/tmp/out/seed.c",
    ]


def test_csmith_seed_source_uses_balanced_default_profile_when_env_is_absent(
    monkeypatch,
) -> None:
    monkeypatch.delenv("CSMITH_USER_OPTIONS", raising=False)

    source = CSmithSeedSource()
    command = source.build_command(Path("/tmp/out/seed.c"))

    assert command == [
        "csmith",
        "--no-bitfields",
        "--max-block-depth",
        "3",
        "--max-block-size",
        "4",
        "--max-pointer-depth",
        "2",
        "--output",
        "/tmp/out/seed.c",
    ]


def test_csmith_seed_source_resolves_binary_from_csmith_home(
    tmp_path: Path, monkeypatch
) -> None:
    binary = tmp_path / "bin" / "csmith"
    binary.parent.mkdir(parents=True)
    binary.write_text("", encoding="utf-8")
    monkeypatch.setenv("CSMITH_HOME", str(tmp_path))

    source = CSmithSeedSource()

    assert source.build_command(Path("/tmp/out/seed.c"))[0] == binary.as_posix()


def test_creal_seed_source_builds_linux_command() -> None:
    source = CrealMr1SeedSource(
        count=1,
        python_bin="/usr/bin/python3",
        script_path="/opt/creal/creal.py",
        syn_prob=3,
    )

    command = source.build_command(Path("/tmp/creal/out"))

    assert command == [
        "/usr/bin/python3",
        "/opt/creal/creal.py",
        "--dst",
        "/tmp/creal/out",
        "--syn-prob",
        "3",
        "--num-mutants",
        "1",
    ]


def test_creal_seed_source_finds_seed_and_mutant_files(tmp_path: Path) -> None:
    output_dir = tmp_path / "out"
    output_dir.mkdir()
    seed = output_dir / "ABC123_seed.c"
    mutant = output_dir / "ABC123_seed_syn0.c"
    seed.write_text("int main(void) { return 0; }\n", encoding="utf-8")
    mutant.write_text("int main(void) { return 1; }\n", encoding="utf-8")

    source = CrealMr1SeedSource(
        count=1,
        python_bin="/usr/bin/python3",
        script_path="/opt/creal/creal.py",
        syn_prob=3,
    )

    discovered_seed, discovered_mutant = source.find_seed_and_mutant(output_dir)

    assert discovered_seed == seed
    assert discovered_mutant == mutant


def test_resolve_default_creal_script_prefers_env(monkeypatch) -> None:
    monkeypatch.setenv("CREAL_SCRIPT", "/env/creal.py")

    assert resolve_default_creal_script() == "/env/creal.py"


def test_resolve_default_creal_script_returns_empty_without_env(monkeypatch) -> None:
    monkeypatch.delenv("CREAL_SCRIPT", raising=False)

    assert resolve_default_creal_script() == ""


def test_resolve_default_csmith_home_prefers_env(monkeypatch) -> None:
    monkeypatch.setenv("CSMITH_HOME", "/env/csmith-home")

    assert resolve_default_csmith_home() == "/env/csmith-home"


def test_resolve_default_csmith_home_returns_empty_without_env(monkeypatch) -> None:
    monkeypatch.delenv("CSMITH_HOME", raising=False)

    assert resolve_default_csmith_home() == ""


def test_llm_file_seed_source_lists_sorted_c_files(tmp_path: Path) -> None:
    seed_dir = tmp_path / "llm_seeds"
    seed_dir.mkdir()
    (seed_dir / "b_case.c").write_text("int main(void) { return 0; }\n", encoding="utf-8")
    (seed_dir / "a_case.c").write_text("int main(void) { return 1; }\n", encoding="utf-8")
    (seed_dir / "note.txt").write_text("ignore\n", encoding="utf-8")

    source = LLMFileSeedSource(seed_dir=seed_dir)

    assert [path.name for path in source.list_seed_files()] == ["a_case.c", "b_case.c"]


def test_choose_criterion_variable_prefers_global_scalar() -> None:
    source = """
    #include "csmith.h"
    static unsigned g_2 = 1U;

    int main(void) {
        int x = 0;
        return x;
    }
    """

    assert choose_criterion_variable(source) == "g_2"


def test_choose_criterion_variable_falls_back_to_main_local() -> None:
    source = """
    int main(void) {
        int x = 7;
        int y = x + 1;
        return y;
    }
    """

    assert choose_criterion_variable(source) == "x"


def test_choose_criterion_variable_ignores_csmith_undefined_helper() -> None:
    source = """
    #include "csmith.h"
    static long __undefined;
    static int8_t g_17 = 0L;
    static uint16_t g_44 = 1U;

    int main(void) {
        g_44 = g_17 + 1;
        return g_44;
    }
    """

    assert choose_criterion_variable(source) == "g_44"


def test_choose_criterion_variables_returns_top_two_scalars() -> None:
    source = """
    #include "csmith.h"
    static unsigned g_2 = 1U;
    static unsigned g_3 = 2U;
    static unsigned g_4 = 3U;

    int main(void) {
        int x = 0;
        return x + g_2 + g_3 + g_4;
    }
    """

    assert choose_criterion_variables(source, 2) == ("g_2", "g_3")


def test_choose_criterion_variables_rejects_insufficient_candidates() -> None:
    source = """
    int main(void) {
        int x = 7;
        return x;
    }
    """

    try:
        choose_criterion_variables(source, 2)
    except ValueError as exc:
        assert "unable to choose" in str(exc)
    else:
        raise AssertionError("expected choose_criterion_variables to fail")


def test_write_criteria_file_preserves_variable_list(tmp_path: Path) -> None:
    criteria_path = tmp_path / "criteria.json"

    write_criteria_file(criteria_path, seed_id="case_01", variables=("g_1", "g_2"))

    payload = criteria_path.read_text(encoding="utf-8")
    assert '"variables": [' in payload
    assert '"g_1"' in payload
    assert '"g_2"' in payload
