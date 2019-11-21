#include <unistd.h>

void mx_print_alphabet(void) {
	int a = 0;
	for (char i = 65; i <= 90; i++) { 
		if (i%2 == 0) {
			a = i + 32;
			write(1, &a, sizeof(i));	
		}
		else {
			a = i;
			write(1, &a, sizeof(i));
		}	
	}
}


