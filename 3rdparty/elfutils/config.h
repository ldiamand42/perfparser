/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Building with -fsanitize=undefined or not */
#define CHECK_UNDEFINED 0

/* Should ar and ranlib use -D behavior by default? */
#define DEFAULT_AR_DETERMINISTIC false

/* Define to 1 if you have the declaration of `memrchr', and to 0 if you
   don't. */
#define HAVE_DECL_MEMRCHR 1

/* Define to 1 if you have the declaration of `powerof2', and to 0 if you
   don't. */
#ifdef __linux__
// powerof2 is in sys/param.h on linux.
#define HAVE_DECL_POWEROF2 1
#else
#define HAVE_DECL_POWEROF2 0
#endif

/* Define to 1 if you have the declaration of `rawmemchr', and to 0 if you
   don't. */
#define HAVE_DECL_RAWMEMCHR 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if <sys/user.h> defines struct user_regs_struct */
#define HAVE_SYS_USER_REGS 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* $libdir subdirectory containing libebl modules. */
#define LIBEBL_SUBDIR "elfutils"

/* Identifier for modules in the build. */
#define MODVERSION "Build for Qt Creator"

/* Name of package */
#define PACKAGE "elfutils"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://bugzilla.redhat.com/"

/* Define to the full name of this package. */
#define PACKAGE_NAME "elfutils"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "elfutils 0.168"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "elfutils"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.168"

/* The size of `long', as computed by sizeof. */
#if QMAKE_ARCH == 64
#define SIZEOF_LONG 8
#else
#define SIZEOF_LONG 4
#endif

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Support bzip2 decompression via -lbz2. */
/* #undef USE_BZLIB */

/* Defined if demangling is enabled */
#define USE_DEMANGLE 1

/* Defined if libraries should be thread-safe. */
/* #undef USE_LOCKS */

/* Support LZMA (xz) decompression via -llzma. */
/* #undef USE_LZMA */

/* Support gzip decompression via -lz. */
#define USE_ZLIB 1

/* Version number of package */
#define VERSION "0.168"

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
#if QMAKE_ARCH == 32
#define _FILE_OFFSET_BITS 64
#endif

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

#include <eu-config.h>
