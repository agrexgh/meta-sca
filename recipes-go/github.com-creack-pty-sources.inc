SRC_URI_append = " https://proxy.golang.org/github.com/creack/pty/@v/v1.1.11.zip;srcoutput=github.com/creack/pty;srcinput=github.com/creack/pty@v1.1.11;downloadfilename=github-com-creack-pty-1.1.11.zip;name=github-com-creack-pty"
SRC_URI[github-com-creack-pty.sha256sum] = "d6594fd4844c242a5c7d6e9b25516182460cffa820e47e8ffb8eea625991986c"

MOD_LICENSE_append = " \
    MIT \
"
LIC_FILES_CHKSUM_append = " \
    file://src/github.com/creack/pty/LICENSE;md5=93958070863d769117fa33b129020050 \
"