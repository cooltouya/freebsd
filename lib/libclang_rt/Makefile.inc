# $FreeBSD$

.include <src.opts.mk>

CRTARCH=${MACHINE_CPUARCH:C/amd64/x86_64/}
CRTSRC=${.CURDIR}/../../../contrib/compiler-rt

LIBDIR=/usr/lib/clang/3.5.0/lib/freebsd

NO_PIC=
MK_PROFILE=no

WARNS?=0

SSP_CFLAGS=
CFLAGS+=-DNDEBUG
CFLAGS+=${PICFLAG}
CFLAGS+=-fno-builtin
CFLAGS+=-fno-exceptions
CFLAGS+=-fno-rtti
CFLAGS+=-fno-stack-protector
CFLAGS+=-funwind-tables
CFLAGS+=-fvisibility-inlines-hidden
CFLAGS+=-fvisibility=hidden
CFLAGS+=-I${CRTSRC}/lib
