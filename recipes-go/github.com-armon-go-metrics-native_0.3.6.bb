SUMMARY = "go.mod: github.com/armon/go-metrics"
HOMEPAGE = "https://pkg.go.dev/github.com/armon/go-metrics"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-armon-go-metrics-sources.inc

GO_IMPORT = "github.com/armon/go-metrics"

inherit gosrc
inherit native
