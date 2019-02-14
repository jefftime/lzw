#ifndef LZW_BITS_H
#define LZW_BITS_H

#include <stdio.h>

enum lzw_bit_resource_type {
  BIT_FILE,
  BIT_BUFFER
};

struct lzw_bit_writer {
  enum lzw_bit_resource_type type;
  unsigned long bits;
  unsigned char pos;
  struct darray *buf;
};

struct lzw_bit_reader {
  enum lzw_bit_resource_type type;
  unsigned long bits;
  struct {
    unsigned long pos;
    unsigned long size;
    unsigned char *data;
  } buf;
  unsigned char pos;
};

void lzw_bw_init(struct lzw_bit_writer *b,
                 enum lzw_bit_resource_type type,
                 void *dst);
void lzw_bw_pack(struct lzw_bit_writer *b,
                 unsigned char n_bits,
                 unsigned int bits);
unsigned char *lzw_bw_result(struct lzw_bit_writer *b);
void lzw_br_init(struct lzw_bit_reader *r,
                 enum lzw_bit_resource_type type,
                 void *src,
                 unsigned long src_size);
int lzw_br_read(struct lzw_bit_reader *r,
                unsigned char n_bits,
                unsigned int *result);
int lzw_br_peek(struct lzw_bit_reader *r,
                unsigned char n_bits,
                unsigned int *result);

#endif
