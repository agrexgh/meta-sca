SRC_URI_append = " https://proxy.golang.org/go.etcd.io/etcd/@v/v2.3.8+incompatible.zip;srcoutput=go.etcd.io/etcd;srcinput=go.etcd.io/etcd@v2.3.8+incompatible;downloadfilename=go-etcd-io-etcd-2.3.8+incompatible.zip;name=go-etcd-io-etcd"
SRC_URI[go-etcd-io-etcd.sha256sum] = "c09c0dd59e0dbd3b9348726d0275383b29af8012e8b4f2001c8f76d6bb231267"

MOD_LICENSE_append = " \
    Apache-2.0 \
    BSD-2-Clause \
    BSD-3-Clause \
    GPL-1.0-or-later \
    GPL-3.0-only \
    LGPL-3.0-or-later \
    MIT \
"
LIC_FILES_CHKSUM_append = " \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/akrennmair/gopcap/LICENSE;md5=67254149849a25186e14dcb25c222861 \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/bgentry/speakeasy/LICENSE_WINDOWS;md5=b563ae7163bca24b2c0ed1486f8c944c \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/boltdb/bolt/LICENSE;md5=13b2a308eefa10d841e3bf2467dbe07a \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/cheggaaa/pb/LICENSE;md5=9fd355f2b4ce97ffb67e73d1167f8399 \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/codegangsta/cli/LICENSE;md5=ed9b539ed65d73926f30ff1f1587dc44 \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/coreos/gexpect/LICENCE;md5=72d307d995cd1a1a0c325d2008fc4e20 \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/cpuguy83/go-md2man/LICENSE.md;md5=80794f9009df723bbc6fe19234c9f517 \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/gogo/protobuf/LICENSE;md5=4e3a8f29922ea8f0b9e84d8324c515a7 \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/golang/glog/LICENSE;md5=19cbd64715b51267a47bf3750cc6a8a5 \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/golang/protobuf/LICENSE;md5=14db3a56c3796a940ba32948a15f97d0 \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/google/btree/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/inconshreveable/mousetrap/LICENSE;md5=b23cff9db13f093a4e6ff77105cbd8eb \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/jonboulle/clockwork/LICENSE;md5=136e4f49dbf29942c572a3a8f6e88a77 \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/kballard/go-shellquote/LICENSE;md5=9d95d1ad917c814c23909addb8692eeb \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/kr/pty/License;md5=93958070863d769117fa33b129020050 \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/olekukonko/tablewriter/LICENCE.md;md5=db693bd8ac7f21507ca3c3088faaa87c \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/olekukonko/ts/LICENCE;md5=db693bd8ac7f21507ca3c3088faaa87c \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/prometheus/procfs/LICENSE;md5=86d3f3a95c324c9479bd8986968f4327 \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/russross/blackfriday/LICENSE.txt;md5=ecf8a8a60560c35a862a4a545f2db1b3 \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/shurcooL/sanitized_anchor_name/LICENSE;md5=bee2c3aa5bd0f265ffbd193eb18ca30d \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/spf13/cobra/LICENSE.txt;md5=920d76114a32b0fb75b3f2718c5a91be \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/spf13/cobra/cobra/cmd/licenses.go;md5=adc117774e872cbaff34c0edb8b5ff7d \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/spf13/pflag/LICENSE;md5=1e8b7dc8b906737639131047a590f21d \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/ugorji/go/LICENSE;md5=a03c0693c900925da5789db4e72da142 \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/github.com/xiang90/probing/LICENSE;md5=61b57bfd44f7924c8a12cd72d3aa1e93 \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/golang.org/x/net/LICENSE;md5=5d4950ecb7b26d2c5e4e7b4e0dd74707 \
    file://src/go.etcd.io/etcd/Godeps/_workspace/src/google.golang.org/grpc/LICENSE;md5=a4bad33881612090c6035d8393175996 \
    file://src/go.etcd.io/etcd/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
"