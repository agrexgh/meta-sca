SUMMARY = "go.mod: github.com/pseudomuto/protokit"
HOMEPAGE = "https://pkg.go.dev/github.com/pseudomuto/protokit"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-pseudomuto-protokit-sources.inc

GO_IMPORT = "github.com/pseudomuto/protokit"

# needs CGO
do_compile[noexec] = "1"

inherit gosrc
inherit native
