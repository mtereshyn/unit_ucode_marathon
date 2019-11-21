#include <unistd.h>
#include "mx_strlen.c"

void mx_printstr(const char *s){
	write(1, *s, sizeof(s));	
}
