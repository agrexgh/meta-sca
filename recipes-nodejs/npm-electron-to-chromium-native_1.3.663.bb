SUMMARY = "NPM: electron-to-chromium"
DESCRIPTION = "Provides a list of electron-to-chromium version mappings"
HOMEPAGE = "https://github.com/kilian/electron-to-chromium#readme"

LICENSE = "ISC"
LIC_FILES_CHKSUM = "file://LICENSE;md5=c4bd4cd0c32203ba1496aa7686422491"

DEPENDS = ""

SRC_URI = "https://registry.npmjs.org/electron-to-chromium/-/electron-to-chromium-1.3.663.tgz"
SRC_URI[md5sum] = "1f8098b0cc86ab652d8d60ab307c68e0"
SRC_URI[sha256sum] = "218985378dfbe10135289773747393ec395db9881bc9be326065788cc1741ece"

NPM_PKGNAME = "electron-to-chromium"

inherit npmhelper
inherit native