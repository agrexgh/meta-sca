SUMMARY = "go.mod: github.com/ugorji/go"
HOMEPAGE = "https://pkg.go.dev/github.com/ugorji/go"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-ugorji-go-sources.inc

GO_IMPORT = "github.com/ugorji/go"

inherit gosrc
inherit native
