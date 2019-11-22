#include <stdio.h>

char *mx_strncpy(char *dst, const char *src, int len) {

	while (*src)
	{
		*dst = *src;
		src++;
		dst++;
	}
}
