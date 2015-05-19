SUMMARY = "A small image just capable of allowing a device to boot."

IMAGE_INSTALL = "duktape packagegroup-core-boot ${ROOTFS_PKGMANAGE_BOOTSTRAP} ${CORE_IMAGE_EXTRA_INSTALL}"

IMAGE_LINGUAS = " "

LICENSE = "MIT"

inherit core-image

IMAGE_ROOTFS_SIZE ?= "8192"

ROOTFS_POSTPROCESS_COMMAND += "do_rootfs_postprocess; "

do_rootfs_postprocess() {
    rm -rf ${IMAGE_ROOTFS}/usr/lib/opkg
}