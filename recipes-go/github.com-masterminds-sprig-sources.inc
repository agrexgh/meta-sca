SRC_URI_append = " https://github.com/Masterminds/sprig/archive/refs/tags/v2.22.0.zip;srcoutput=github.com/Masterminds/sprig;srcinput=sprig-2.22.0;downloadfilename=github-com-masterminds-sprig-2.22.0+incompatible.zip;name=github-com-masterminds-sprig"
SRC_URI[github-com-masterminds-sprig.sha256sum] = "2b98a62c67eb38e85673b7d02b17d504c7d48293a87c25b0c892c155cbeae8df"

MOD_LICENSE_append = " \
    MIT \
"
LIC_FILES_CHKSUM_append = " \
    file://src/github.com/Masterminds/sprig/LICENSE.txt;md5=652ef7590e03427663a9b9d1318a9fbb \
"