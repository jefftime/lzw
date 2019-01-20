#ifndef LZW_BUFFER_H
#define LZW_BUFFER_H

struct lzw_buffer {
  unsigned long len;
  unsigned long capacity;
  unsigned char *ptr;
};

void lzw_buf_init(struct lzw_buffer *buf, unsigned long capacity);
void lzw_buf_push(struct lzw_buffer *buf, unsigned char val);

#endif
