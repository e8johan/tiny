# tiny-js

tiny-js is a minimalist, Linux-based, Javascript platform.

It is built on the <a href="http://www.yoctoproject.org/">Yocto project</a> and <a href="http://duktape.org/">duktape</a>.

The roadmap for the project can be found at <a href="https://trello.com/b/vxPSE5gv/tiny-js">trello</a>.



Dependencies
============

This layer depends on poky, so start from there.



Table of Contents
=================

- Adding the tinyjs layer to your build
- Building a tinyjs image
- Running a tinyjs image


Adding the tinyjs layer to your build
=====================================

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


Building a tinyjs image
=======================

Use bitbake to build the tinyjs-image target.

Running a tinyjs image
======================

Run using qemu, e.g.

  tmp/sysroots/x86_64-linux/usr/bin/qemu-system-i386 -kernel tmp/deploy/images/qemux86/bzImage-qemux86.bin -initrd tmp/deploy/images/qemux86/tinyjs-image-qemux86.cpio.gz -nographic -append "console=ttyS0 root=/dev/ram0"
