#include <stddef.h>
#include <stdlib.h>
#include <wchar.h>

#include "unicode.h"

#ifndef SMALL

int
u8width(const char *buf) {
	const unsigned char *ubuf = buf;
	wchar_t wc;
	int u8len;

	u8len = 0;
	if (ubuf[0] <= 0x7F)
		u8len = 1;
	else if ((ubuf[0] & 0xE0) == 0xC0)
		u8len = 2;
	else if ((ubuf[0] & 0xF0) == 0xE0)
		u8len = 3;
	else if ((ubuf[0] & 0xF8) == 0xF0)
		u8len = 4;

	if (mbtowc(&wc, buf, u8len) == u8len)
		return wcwidth(wc);
	else {
		mbtowc(&wc, NULL, 0);
		return 1;
	}
}

#endif
