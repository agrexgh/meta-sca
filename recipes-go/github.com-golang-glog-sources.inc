SRC_URI_append = " https://proxy.golang.org/github.com/golang/glog/@v/v0.0.0-20160126235308-23def4e6c14b.zip;srcoutput=github.com/golang/glog;srcinput=github.com/golang/glog@v0.0.0-20160126235308-23def4e6c14b;downloadfilename=github-com-golang-glog-0.0.0-20160126235308-23def4e6c14b.zip;name=github-com-golang-glog"
SRC_URI[github-com-golang-glog.sha256sum] = "36b3c522c8102dfe74ca96e474c4c361750bf2bb85bc3cefe4f074c07d6825a9"

MOD_LICENSE_append = " \
    Apache-2.0 \
"
LIC_FILES_CHKSUM_append = " \
    file://src/github.com/golang/glog/LICENSE;md5=19cbd64715b51267a47bf3750cc6a8a5 \
"