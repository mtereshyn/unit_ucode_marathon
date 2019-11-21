#include <unistd.h>

void mx_printchar(char c) {
	char c = 9;
        write(1, &c, sizeof(c));
}

