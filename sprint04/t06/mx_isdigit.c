#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>

bool mx_isdigit(int c) {

	for (char a = '1'; a <= '9'; ++a) {
		if (c == a) {
			return 1;
		}
	}
	return 0;
}

