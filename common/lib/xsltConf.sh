#
# Configuration file for using the xslt library
#
XSLT_LIBDIR="-L/bitnami/meanstack-linux-x64/output/common/lib"
XSLT_LIBS="-lxslt  -L/bitnami/meanstack-linux-x64/output/common/lib -lxml2 -lz -liconv -lm -ldl -lm -lrt"
XSLT_INCLUDEDIR="-I/bitnami/meanstack-linux-x64/output/common/include"
MODULE_VERSION="xslt-1.1.28"
