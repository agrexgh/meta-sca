SUMMARY = "go.mod: github.com/hashicorp/go-plugin"
HOMEPAGE = "https://pkg.go.dev/github.com/hashicorp/go-plugin"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-hashicorp-go-plugin-sources.inc

GO_IMPORT = "github.com/hashicorp/go-plugin"

inherit gosrc
inherit native