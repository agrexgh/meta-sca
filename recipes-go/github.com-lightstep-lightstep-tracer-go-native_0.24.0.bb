SUMMARY = "go.mod: github.com/lightstep/lightstep-tracer-go"
HOMEPAGE = "https://pkg.go.dev/github.com/lightstep/lightstep-tracer-go"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-lightstep-lightstep-tracer-go-sources.inc

GO_IMPORT = "github.com/lightstep/lightstep-tracer-go"

inherit gosrc
inherit native
