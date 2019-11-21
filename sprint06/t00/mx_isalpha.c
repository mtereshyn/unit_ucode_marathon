#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>

bool mx_isalpha(int c) {

	for (char a = 'A'; a <= 'Z'; ++a) {
		if (c == a) {
			return 1;
		}
	}
	for (char a = 'a'; a <= 'z'; ++a) {
		if (c == a){
			return 1;
		}
	}
	
	return 0;
}


