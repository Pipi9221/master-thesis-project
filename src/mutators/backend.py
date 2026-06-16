from __future__ import annotations

import json
from dataclasses import dataclass
from pathlib import Path


@dataclass(frozen=True, slots=True)
class DiscoveredSite:
    site_id: str
    site_kind: str
    preferred_for: tuple[str, ...]
    function_name: str
    node_kind: str
    line: int
    column: int
    source_offset: int


@dataclass(frozen=True, slots=True)
class SiteDiscoveryReport:
    seed: str
    site_count: int
    sites: tuple[DiscoveredSite, ...]


@dataclass(frozen=True, slots=True)
class MutationRequest:
    mr: str
    seed_path: Path
    criteria_path: Path
    rng_seed: int
    output_dir: Path


@dataclass(frozen=True, slots=True)
class NormalizeRequest:
    seed_path: Path
    output_path: Path


@dataclass(frozen=True, slots=True)
class ToolingBackend:
    binary: str

    def build_normalize_command(self, request: NormalizeRequest) -> list[str]:
        return [
            self.binary,
            "normalize",
            "--seed",
            str(request.seed_path),
            "--output",
            str(request.output_path),
        ]

    def build_discover_sites_command(self, seed_path: Path) -> list[str]:
        return [
            self.binary,
            "discover-sites",
            "--seed",
            str(seed_path),
        ]

    def build_mutate_command(self, request: MutationRequest) -> list[str]:
        return [
            self.binary,
            "mutate",
            "--mr",
            request.mr,
            "--seed",
            str(request.seed_path),
            "--criteria",
            str(request.criteria_path),
            "--rng-seed",
            str(request.rng_seed),
            "--output-dir",
            str(request.output_dir),
        ]

    def parse_site_discovery_output(self, output: str) -> SiteDiscoveryReport:
        payload = json.loads(output)
        sites = tuple(
            DiscoveredSite(
                site_id=str(item["site_id"]),
                site_kind=str(item["site_kind"]),
                preferred_for=tuple(str(value) for value in item["preferred_for"]),
                function_name=str(item["function_name"]),
                node_kind=str(item["node_kind"]),
                line=int(item["line"]),
                column=int(item["column"]),
                source_offset=int(item["source_offset"]),
            )
            for item in payload["sites"]
        )
        return SiteDiscoveryReport(
            seed=str(payload["seed"]),
            site_count=int(payload["site_count"]),
            sites=sites,
        )
