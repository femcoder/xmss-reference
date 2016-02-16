/*
xmss_commons.c 20160210
Andreas Hülsing
Joost Rijneveld
Public domain.
*/

#include "xmss_commons.h"
#include <stdlib.h>
#include <stdio.h>

void to_byte(unsigned char *out, unsigned int in, int bytes)
{
  int i;
  for (i = bytes-1; i >= 0; i--) {
    out[i] = in & 0xff;
    in = in >> 8;
  }
}

void hexdump(const unsigned char *a, size_t len)
{
  size_t i;
  for (i = 0; i < len; i++)
    printf("%02x", a[i]);
}