#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>

bool mx_isspace(char c) {
	if ((' ' && '\n' && '\t' && '\v' && '\f' && '\r') == c) {
		return true;
	}
	else{
		return false;
	}
}

