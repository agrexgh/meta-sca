SUMMARY = "go.mod: golang.org/x/crypto"
HOMEPAGE = "https://pkg.go.dev/golang.org/x/crypto"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require golang.org-x-crypto-sources.inc

GO_IMPORT = "golang.org/x/crypto"

inherit gosrc
inherit native
