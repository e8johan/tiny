DESCRIPTION = "Duktape - a minimalist Javascript engine"
HOMEPAGE = "http://duktape.org/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=1e4f11cc6beb6f48c3221980bfb8339f"

PR = "r3"

DEPENDS = ""

SRC_URI += "file://0001-use-no-64bit-integers.patch"

EXTRA_OEMAKE = "'CC=${CC}' 'RANLIB=${RANLIB}' 'AR=${AR} CFLAGS=${CFLAGS} -I${S}/include -DWITHOUT_XATTR' 'BUILDDIR=${S}' -f Makefile.cmdline"

FILES_${PN} += "mandel.js"

do_compile() {
    oe_runmake -f Makefile.cmdline
}

do_install() {
    install -d ${D}${bindir}
    install -m 0755 duk ${D}${bindir}
    install -m 0644 mandel.js ${D}
}