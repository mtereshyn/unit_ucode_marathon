#include <unistd.h>
#include "mx_printstr.c"
#include "mx_strlen.c"
void mx_is_positive(int i) {
	if (i > 0) {
		mx_printstr("positive");
	}
	else if  (i < 0) {
		mx_prinstr("negative");
	}
	else {
		mx_prinstr("zero");
	}
}

