#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>

bool mx_islower(int c) {
	for (char a = 'a'; a <= 'z'; a++){
		if (c == a) {
			return 1;
		}

		else {
			return 0;
		}

	}

}
