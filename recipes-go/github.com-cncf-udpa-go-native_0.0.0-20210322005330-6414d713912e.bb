SUMMARY = "go.mod: github.com/cncf/udpa/go"
HOMEPAGE = "https://pkg.go.dev/github.com/cncf/udpa/go"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-cncf-udpa-go-sources.inc

GO_IMPORT = "github.com/cncf/udpa/go"

inherit gosrc
inherit native
