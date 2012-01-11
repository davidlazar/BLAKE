#ifndef _BLAKE512_H_
#define _BLAKE512_H_

#include <stdint.h>

typedef struct {
  uint64_t h[8], s[4], t[2];
  int buflen, nullt;
  uint8_t buf[128];
} state;

typedef struct {
  state inner;
  state outer;
} hmac_state;

void blake512_init(state *);
void blake512_update(state *, const uint8_t *, uint64_t);
void blake512_final(state *, uint8_t *);
void blake512_hash(uint8_t *, const uint8_t *, uint64_t);

void hmac_blake512_init(hmac_state *, const uint8_t *, uint64_t);
void hmac_blake512_update(hmac_state *, const uint8_t *, uint64_t);
void hmac_blake512_final(hmac_state *, uint8_t *);
void hmac_blake512_hash(uint8_t *, const uint8_t *, uint64_t, const uint8_t *, uint64_t);

#endif /* _BLAKE512_H_ */
