SUMMARY = "go.mod: github.com/fatih/color"
HOMEPAGE = "https://pkg.go.dev/github.com/fatih/color"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-fatih-color-sources.inc

GO_IMPORT = "github.com/fatih/color"

inherit gosrc
inherit native
