#include <string.h>
#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
	int size = mx_strlen(str);
	char* new = mx_strnew(size);
	if (new == NULL) {
		return NULL;
	}
	mx_strcpy(new, str);
	return new;
}
