from pathlib import Path

from common.validation import CommandResult
from mutators.backend import (
    DiscoveredSite,
    MutationRequest,
    NormalizeRequest,
    SiteDiscoveryReport,
    ToolingBackend,
)


def test_tooling_backend_builds_replayable_mutate_command(tmp_path: Path) -> None:
    backend = ToolingBackend(binary="tooling/bin/mr-ast-tool")
    request = MutationRequest(
        mr="MR3",
        seed_path=tmp_path / "seed.c",
        criteria_path=tmp_path / "criteria.json",
        rng_seed=29,
        output_dir=tmp_path / "run-output",
    )

    command = backend.build_mutate_command(request)

    assert command == [
        "tooling/bin/mr-ast-tool",
        "mutate",
        "--mr",
        "MR3",
        "--seed",
        str(request.seed_path),
        "--criteria",
        str(request.criteria_path),
        "--rng-seed",
        "29",
        "--output-dir",
        str(request.output_dir),
    ]


def test_tooling_backend_builds_discover_sites_command(tmp_path: Path) -> None:
    backend = ToolingBackend(binary="tooling/bin/mr-ast-tool")
    seed_path = tmp_path / "seed.c"

    command = backend.build_discover_sites_command(seed_path)

    assert command == [
        "tooling/bin/mr-ast-tool",
        "discover-sites",
        "--seed",
        str(seed_path),
    ]


def test_tooling_backend_builds_normalize_command(tmp_path: Path) -> None:
    backend = ToolingBackend(binary="tooling/bin/mr-ast-tool")
    request = NormalizeRequest(
        seed_path=tmp_path / "seed.c",
        output_path=tmp_path / "normalized.c",
    )

    command = backend.build_normalize_command(request)

    assert command == [
        "tooling/bin/mr-ast-tool",
        "normalize",
        "--seed",
        str(request.seed_path),
        "--output",
        str(request.output_path),
    ]


def test_tooling_backend_parses_site_discovery_output() -> None:
    backend = ToolingBackend(binary="tooling/bin/mr-ast-tool")
    output = """
    {
      "seed": "/tmp/seed.c",
      "site_count": 2,
      "sites": [
        {
          "site_id": "site-1",
          "site_kind": "stmt_boundary",
          "preferred_for": ["MR2", "MR3"],
          "function_name": "main",
          "node_kind": "DeclStmt",
          "line": 5,
          "column": 5,
          "source_offset": 41
        },
        {
          "site_id": "site-2",
          "site_kind": "dead_wrapper_site",
          "preferred_for": ["MR3"],
          "function_name": "main",
          "node_kind": "ReturnStmt",
          "line": 7,
          "column": 5,
          "source_offset": 73
        }
      ]
    }
    """

    report = backend.parse_site_discovery_output(output)

    assert report == SiteDiscoveryReport(
        seed="/tmp/seed.c",
        site_count=2,
        sites=(
            DiscoveredSite(
                site_id="site-1",
                site_kind="stmt_boundary",
                preferred_for=("MR2", "MR3"),
                function_name="main",
                node_kind="DeclStmt",
                line=5,
                column=5,
                source_offset=41,
            ),
            DiscoveredSite(
                site_id="site-2",
                site_kind="dead_wrapper_site",
                preferred_for=("MR3",),
                function_name="main",
                node_kind="ReturnStmt",
                line=7,
                column=5,
                source_offset=73,
            ),
        ),
    )
