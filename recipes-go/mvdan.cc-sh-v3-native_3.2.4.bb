SUMMARY = "go.mod: mvdan.cc/sh/v3"
HOMEPAGE = "https://pkg.go.dev/mvdan.cc/sh/v3"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('MOD_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require mvdan.cc-sh-v3-sources.inc
require github.com-google-renameio-sources.inc
require github.com-pkg-diff-sources.inc
require golang.org-x-sync-sources.inc
require golang.org-x-sys-sources.inc
require golang.org-x-term-sources.inc
require mvdan.cc-editorconfig-sources.inc

GO_IMPORT = "mvdan.cc/sh/v3"

inherit gosrc
inherit native