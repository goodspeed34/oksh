#include "unicode.h"

#ifndef SMALL

/* The following code was generated from EastAsianWidth.txt (Flag: W&F)
 * Reference: https://www.unicode.org/reports/tr11/tr11-6.html
 */

int is_fullwidth(unsigned long cpt) {
	if ((0x1100 <= cpt && cpt <= 0x115f)
	       || (0x231a <= cpt && cpt <= 0x231b)
	       || (0x2329 <= cpt && cpt <= 0x232a)
	       || (0x23e9 <= cpt && cpt <= 0x23ec)
	       || (cpt == 0x23f0)
	       || (cpt == 0x23f3)
	       || (0x25fd <= cpt && cpt <= 0x25fe)
	       || (0x2614 <= cpt && cpt <= 0x2615)
	       || (0x2630 <= cpt && cpt <= 0x2637)
	       || (0x2648 <= cpt && cpt <= 0x2653)
	       || (cpt == 0x267f)
	       || (0x268a <= cpt && cpt <= 0x268f)
	       || (cpt == 0x2693)
	       || (cpt == 0x26a1)
	       || (0x26aa <= cpt && cpt <= 0x26ab)
	       || (0x26bd <= cpt && cpt <= 0x26be)
	       || (0x26c4 <= cpt && cpt <= 0x26c5)
	       || (cpt == 0x26ce)
	       || (cpt == 0x26d4)
	       || (cpt == 0x26ea)
	       || (0x26f2 <= cpt && cpt <= 0x26f3)
	       || (cpt == 0x26f5)
	       || (cpt == 0x26fa)
	       || (cpt == 0x26fd)
	       || (cpt == 0x2705)
	       || (0x270a <= cpt && cpt <= 0x270b)
	       || (cpt == 0x2728)
	       || (cpt == 0x274c)
	       || (cpt == 0x274e)
	       || (0x2753 <= cpt && cpt <= 0x2755)
	       || (cpt == 0x2757)
	       || (0x2795 <= cpt && cpt <= 0x2797)
	       || (cpt == 0x27b0)
	       || (cpt == 0x27bf)
	       || (0x2b1b <= cpt && cpt <= 0x2b1c)
	       || (cpt == 0x2b50)
	       || (cpt == 0x2b55)
	       || (0x2e80 <= cpt && cpt <= 0x2e99)
	       || (0x2e9b <= cpt && cpt <= 0x2ef3)
	       || (0x2f00 <= cpt && cpt <= 0x2fd5)
	       || (0x2ff0 <= cpt && cpt <= 0x303e)
	       || (0x3041 <= cpt && cpt <= 0x3096)
	       || (0x3099 <= cpt && cpt <= 0x30ff)
	       || (0x3105 <= cpt && cpt <= 0x312f)
	       || (0x3131 <= cpt && cpt <= 0x318e)
	       || (0x3190 <= cpt && cpt <= 0x31e5)
	       || (0x31ef <= cpt && cpt <= 0x321e)
	       || (0x3220 <= cpt && cpt <= 0x3247)
	       || (0x3250 <= cpt && cpt <= 0xa48c)
	       || (0xa490 <= cpt && cpt <= 0xa4c6)
	       || (0xa960 <= cpt && cpt <= 0xa97c)
	       || (0xac00 <= cpt && cpt <= 0xd7a3)
	       || (0xf900 <= cpt && cpt <= 0xfaff)
	       || (0xfe10 <= cpt && cpt <= 0xfe19)
	       || (0xfe30 <= cpt && cpt <= 0xfe52)
	       || (0xfe54 <= cpt && cpt <= 0xfe66)
	       || (0xfe68 <= cpt && cpt <= 0xfe6b)
	       || (0xff01 <= cpt && cpt <= 0xff60)
	       || (0xffe0 <= cpt && cpt <= 0xffe6)
	       || (0x16fe0 <= cpt && cpt <= 0x16fe4)
	       || (0x16ff0 <= cpt && cpt <= 0x16ff1)
	       || (0x17000 <= cpt && cpt <= 0x187f7)
	       || (0x18800 <= cpt && cpt <= 0x18cd5)
	       || (0x18cff <= cpt && cpt <= 0x18d08)
	       || (0x1aff0 <= cpt && cpt <= 0x1aff3)
	       || (0x1aff5 <= cpt && cpt <= 0x1affb)
	       || (0x1affd <= cpt && cpt <= 0x1affe)
	       || (0x1b000 <= cpt && cpt <= 0x1b122)
	       || (cpt == 0x1b132)
	       || (0x1b150 <= cpt && cpt <= 0x1b152)
	       || (cpt == 0x1b155)
	       || (0x1b164 <= cpt && cpt <= 0x1b167)
	       || (0x1b170 <= cpt && cpt <= 0x1b2fb)
	       || (0x1d300 <= cpt && cpt <= 0x1d356)
	       || (0x1d360 <= cpt && cpt <= 0x1d376)
	       || (cpt == 0x1f004)
	       || (cpt == 0x1f0cf)
	       || (cpt == 0x1f18e)
	       || (0x1f191 <= cpt && cpt <= 0x1f19a)
	       || (0x1f200 <= cpt && cpt <= 0x1f202)
	       || (0x1f210 <= cpt && cpt <= 0x1f23b)
	       || (0x1f240 <= cpt && cpt <= 0x1f248)
	       || (0x1f250 <= cpt && cpt <= 0x1f251)
	       || (0x1f260 <= cpt && cpt <= 0x1f265)
	       || (0x1f300 <= cpt && cpt <= 0x1f320)
	       || (0x1f32d <= cpt && cpt <= 0x1f335)
	       || (0x1f337 <= cpt && cpt <= 0x1f37c)
	       || (0x1f37e <= cpt && cpt <= 0x1f393)
	       || (0x1f3a0 <= cpt && cpt <= 0x1f3ca)
	       || (0x1f3cf <= cpt && cpt <= 0x1f3d3)
	       || (0x1f3e0 <= cpt && cpt <= 0x1f3f0)
	       || (cpt == 0x1f3f4)
	       || (0x1f3f8 <= cpt && cpt <= 0x1f43e)
	       || (cpt == 0x1f440)
	       || (0x1f442 <= cpt && cpt <= 0x1f4fc)
	       || (0x1f4ff <= cpt && cpt <= 0x1f53d)
	       || (0x1f54b <= cpt && cpt <= 0x1f54e)
	       || (0x1f550 <= cpt && cpt <= 0x1f567)
	       || (cpt == 0x1f57a)
	       || (0x1f595 <= cpt && cpt <= 0x1f596)
	       || (cpt == 0x1f5a4)
	       || (0x1f5fb <= cpt && cpt <= 0x1f64f)
	       || (0x1f680 <= cpt && cpt <= 0x1f6c5)
	       || (cpt == 0x1f6cc)
	       || (0x1f6d0 <= cpt && cpt <= 0x1f6d2)
	       || (0x1f6d5 <= cpt && cpt <= 0x1f6d7)
	       || (0x1f6dc <= cpt && cpt <= 0x1f6df)
	       || (0x1f6eb <= cpt && cpt <= 0x1f6ec)
	       || (0x1f6f4 <= cpt && cpt <= 0x1f6fc)
	       || (0x1f7e0 <= cpt && cpt <= 0x1f7eb)
	       || (cpt == 0x1f7f0)
	       || (0x1f90c <= cpt && cpt <= 0x1f93a)
	       || (0x1f93c <= cpt && cpt <= 0x1f945)
	       || (0x1f947 <= cpt && cpt <= 0x1f9ff)
	       || (0x1fa70 <= cpt && cpt <= 0x1fa7c)
	       || (0x1fa80 <= cpt && cpt <= 0x1fa89)
	       || (0x1fa8f <= cpt && cpt <= 0x1fac6)
	       || (0x1face <= cpt && cpt <= 0x1fadc)
	       || (0x1fadf <= cpt && cpt <= 0x1fae9)
	       || (0x1faf0 <= cpt && cpt <= 0x1faf8)
	       || (0x20000 <= cpt && cpt <= 0x2fffd)
	       || (0x30000 <= cpt && cpt <= 0x3fffd))
		return 1;

	return 0;
}

int u8_to_cpt(const char *buf, unsigned long *cpt) {
	const unsigned char *ubuf = buf;

	if (ubuf[0] <= 0x7F) {
		*cpt = ubuf[0];
		return 1;
	} else if ((ubuf[0] & 0xE0) == 0xC0) {
		*cpt = ((ubuf[0] & 0x1F) << 6) | (ubuf[1] & 0x3F);
		return 2;
	} else if ((ubuf[0] & 0xF0) == 0xE0) {
		*cpt = ((ubuf[0] & 0x0F) << 12)
			| ((ubuf[1] & 0x3F) << 6)
			| (ubuf[2] & 0x3F);
		return 3;
	} else if ((ubuf[0] & 0xF8) == 0xF0) {
		*cpt = ((ubuf[0] & 0x07) << 18)
			| ((ubuf[1] & 0x3F) << 12)
			| ((ubuf[2] & 0x3F) << 6)
			| (ubuf[3] & 0x3F);
		return 4;
	}

	return 0;
}

#endif
