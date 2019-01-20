#ifndef GIF_LZW_H
#define GIF_LZW_H

void lzw_compress(unsigned char *src,
                  unsigned long size,
                  unsigned char bit_size,
                  unsigned char **output,
                  unsigned long *out_len);
void lzw_decompress(unsigned char *src,
                    unsigned long size,
                    unsigned char bit_size,
                    unsigned char **output,
                    unsigned long *out_len);

#endif
