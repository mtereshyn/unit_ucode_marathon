#include <unistd.h>
#include <string.h>

void mx_matrix_voice(void) {
	char a = 7;
        write(1, &a, sizeof(a));
}

