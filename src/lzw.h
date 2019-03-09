#ifndef LZW_H
#define LZW_H

void lzw_compress(unsigned char *src,
                  unsigned long size,
                  unsigned char bit_size,
                  unsigned long *out_len,
                  unsigned char **output);
void lzw_compress_gif(unsigned char *src,
                      unsigned long size,
                      unsigned char bit_size,
                      unsigned long *out_len,
                      unsigned char **output);
void lzw_decompress(unsigned char *src,
                    unsigned long size,
                    unsigned char bit_size,
                    unsigned long *out_len,
                    unsigned char **output);

#endif
