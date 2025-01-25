#ifndef __LIBBO_H
#define __LIBBO_H

#include <stdio.h>

#define BYTE_TO_BINARY(byte)  \
  ((byte) & 0x80 ? '1' : '0'), \
  ((byte) & 0x40 ? '1' : '0'), \
  ((byte) & 0x20 ? '1' : '0'), \
  ((byte) & 0x10 ? '1' : '0'), \
  ((byte) & 0x08 ? '1' : '0'), \
  ((byte) & 0x04 ? '1' : '0'), \
  ((byte) & 0x02 ? '1' : '0'), \
  ((byte) & 0x01 ? '1' : '0')

int bo_print(const void *ptr, const int size);

int bo_fprint(FILE *restrict out, const void *ptr, const int size);

int bo_sprint(char *restrict buf, const void *ptr, const int size);

int bo_snprint(char *restrict buf, const int bufsize, const void *ptr, const int size);

#endif
