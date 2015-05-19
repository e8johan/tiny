This README file contains information on the contents of the
tinyjs layer.

Please see the corresponding sections below for details.


Dependencies
============

This layer depends on poky, so start from there.

Patches
=======

Please submit any patches against the tinyjs layer to Johan Thelin <e8johan@gmail.com>


Table of Contents
=================

  I. Adding the tinyjs layer to your build
 II. Building a tinyjs image
III. Running a tinyjs image


I. Adding the tinyjs layer to your build
=================================================

In order to use this layer, you need to make the build system aware of
it.

Assuming the tinyjs layer exists at the top-level of your
yocto build tree, you can add it to the build system by adding the
location of the tinyjs layer to bblayers.conf, along with any
other layers needed. e.g.:

  BBLAYERS ?= " \
    /path/to/yocto/meta \
    /path/to/yocto/meta-yocto \
    /path/to/yocto/meta-yocto-bsp \
    /path/to/yocto/meta-tinyjs \
    "

Also, set DISTRO = "tinyjs" in your local.conf.


II. Building a tinyjs image
===========================

Use bitbake to build the tinyjs-image target.

III. Running a tinyjs image
===========================

Run using qemu, e.g.

  tmp/sysroots/x86_64-linux/usr/bin/qemu-system-i386 -kernel tmp/deploy/images/qemux86/bzImage-qemux86.bin -initrd tmp/deploy/images/qemux86/tinyjs-image-qemux86.cpio.gz -nographic -append "console=ttyS0 root=/dev/ram0"