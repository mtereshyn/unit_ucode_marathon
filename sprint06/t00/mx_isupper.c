#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>

bool mx_isupper(int c) {
	for (char a = 'A'; a <= 'Z'; a++){
		if (c == a) {
			return 1;
		}

		else {
			return 0;
		}

	}

}
