#inlude <unistd.h>
#include <


int sm(char *s) {
	int i = 0;
	while (s != '\0') {
		i++;
		s++;
	}
	return i;
}
		
