SUMMARY = "EditorConfig support in Go"
HOMEPAGE = "https://github.com/mvdan/editorconfig"

LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://src/${GO_IMPORT}/LICENSE;md5=5d1b329cf2d09f301b0d604f96046e5a"

SRC_URI = "git://github.com/mvdan/editorconfig.git;protocol=https"
SRCREV = "fe9680600dc19b55e87461807fbb5105e29dbbcf"
UPSTREAM_CHECK_COMMITS = "1"

GO_IMPORT = "mvdan.cc/editorconfig"

export GO111MODULE = "auto"

inherit go
inherit native