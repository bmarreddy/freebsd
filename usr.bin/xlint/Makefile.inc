#	$NetBSD: Makefile.inc,v 1.8 2002/02/04 00:18:32 thorpej Exp $
# $FreeBSD$

WARNS?=		0

.PATH:		${.CURDIR}/../common

.if exists(${.CURDIR}/../arch/${MACHINE_ARCH})
CFLAGS+=	-I${.CURDIR}/../arch/${MACHINE_ARCH}
.else
CFLAGS+=	-I${.CURDIR}/../arch/${MACHINE_CPUARCH}
.endif
CFLAGS+=	-I${.CURDIR}/../common

OBJECT_FMT=	ELF
