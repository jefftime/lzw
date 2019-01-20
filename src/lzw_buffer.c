#include "lzw_buffer.h"
#include <stdlib.h>

void lzw_buf_init(struct lzw_buffer *buf, unsigned long capacity) {
  /* if (!buf) return; */
  buf->len = 0;
  buf->capacity = capacity;
  buf->ptr = malloc(capacity);
}

void lzw_buf_push(struct lzw_buffer *buf, unsigned char val) {
  if (buf->len == buf->capacity) {
    unsigned char *tmp;

    buf->capacity *= 2;
    tmp = realloc(buf->ptr, buf->capacity);
    if (!tmp) {
      buf->capacity /= 2;
      return;
    }
    buf->ptr = tmp;
  }
  buf->ptr[buf->len++] = val;
}
