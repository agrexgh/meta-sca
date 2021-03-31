SUMMARY = "go.mod: github.com/hashicorp/go-hclog"
HOMEPAGE = "https://pkg.go.dev/github.com/hashicorp/go-hclog"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('MOD_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-hashicorp-go-hclog-sources.inc
require github.com-fatih-color-sources.inc
require github.com-mattn-go-colorable-sources.inc
require github.com-mattn-go-isatty-sources.inc
require golang.org-x-sys-sources.inc

GO_IMPORT = "github.com/hashicorp/go-hclog"

inherit gosrc
inherit native