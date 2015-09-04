GENCCODE_ASSEMBLY_TYPE=-a gcc
SO=so
SOBJ=so
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.48.1.1
COMPILE=gcc -I/bitnami/meanstack-linux-x64/output/common/include -I/bitnami/meanstack-linux-x64/output/sqlite/include -I/bitnami/meanstack-linux-x64/output/common/include/sasl -I/bitnami/meanstack-linux-x64/output/common/include -D_REENTRANT -DU_ATTRIBUTE_DEPRECATED= -I/bitnami/meanstack-linux-x64/output/common/include -fPIC -m64 -Wall -ansi -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings -Wno-long-long  -c
LIBFLAGS=-I/bitnami/meanstack-linux-x64/output/common/include -DPIC -fPIC
GENLIB=gcc -I/bitnami/meanstack-linux-x64/output/common/include -fPIC -m64 -Wall -ansi -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings -Wno-long-long  -L/bitnami/meanstack-linux-x64/output/sqlite/lib -L/bitnami/meanstack-linux-x64/output/common/lib  -shared -Wl,-Bsymbolic
LDICUDTFLAGS=-nodefaultlibs -nostdlib
LD_SONAME=-Wl,-soname -Wl,
RPATH_FLAGS=
BIR_LDFLAGS=-Wl,-Bsymbolic
AR=ar
ARFLAGS=r
RANLIB=ranlib
INSTALL_CMD=/usr/bin/install -c
