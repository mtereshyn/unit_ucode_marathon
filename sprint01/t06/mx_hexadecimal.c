#include <unistd.h>
void mx_hexadecimal(void) {
	for (int a = 48; a <=57; a++) {
                write(1, &a, sizeof(a));
        }
        for (int a = 65; a <= 70; a++) {
                 write(2, &a, sizeof(a));
        }
}
	

