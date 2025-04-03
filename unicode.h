#ifndef UNICODE_H
#define UNICODE_H

int is_fullwidth(unsigned long);
int u8_to_cpt(const char *, unsigned long *);

#endif	/* UNICODE_H */
