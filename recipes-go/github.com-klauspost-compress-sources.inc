SRC_URI_append = " https://proxy.golang.org/github.com/klauspost/compress/@v/v1.11.13.zip;srcoutput=github.com/klauspost/compress;srcinput=github.com/klauspost/compress@v1.11.13;downloadfilename=github-com-klauspost-compress-1.11.13.zip;name=github-com-klauspost-compress"
SRC_URI[github-com-klauspost-compress.sha256sum] = "34436de1847708c1acf3d512b34c870868d492a890d673a6a81b378b793a689b"

MOD_LICENSE_append = " \
    BSD-3-Clause \
    MIT \
"
LIC_FILES_CHKSUM_append = " \
    file://src/github.com/klauspost/compress/LICENSE;md5=f6eed50d75781660de81b193021f14a2 \
    file://src/github.com/klauspost/compress/s2/LICENSE;md5=2460814a2b25a7277556c2d89de915d1 \
    file://src/github.com/klauspost/compress/s2/cmd/internal/readahead/LICENSE;md5=42a7f8bb0a8aa77348e7e5817f10976a \
    file://src/github.com/klauspost/compress/snappy/LICENSE;md5=b8b79c7d4cda128290b98c6a21f9aac6 \
    file://src/github.com/klauspost/compress/zstd/internal/xxhash/LICENSE.txt;md5=802da049c92a99b4387d3f3d91b00fa9 \
"