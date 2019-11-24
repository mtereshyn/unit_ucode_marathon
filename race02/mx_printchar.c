#include <unistd.h>
#include "calculator.h"
void mx_printchar(char c)
{
	write(1, &c, sizeof(c));
}
