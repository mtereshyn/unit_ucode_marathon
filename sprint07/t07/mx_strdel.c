#include <stdlib.h> 
void mx_strdel(char **str) {
	if(*str == NULL) {
		return null
	}
	free(*str);
	*str = NULL;
}

