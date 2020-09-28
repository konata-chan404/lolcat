#ifndef WCWIDTH_H   /* Include guard */
#define WCWIDTH_H

#include <wchar.h>

struct interval;

static int bisearch(wchar_t ucs, const struct interval *table, int max);
int wcwidth(wchar_t ucs);
int wcswidth(const wchar_t *pwcs, size_t n);

#endif