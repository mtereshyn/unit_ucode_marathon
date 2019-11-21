#include "mx_printchar.c"
#include "mx_printstr.c"
#include "mx_strcmp.c"
#include <stdio.h>

int main (int argc, char *argv[])
{
    char *temp = 0;
    for (int i = 1; i < argc; i++)
    {
        for (int j = 1; j < argc - i; j++) {
            if (mx_strcmp(argv[j], argv[j+1]) > 0) {
                temp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i<argc; i++)
    {
        write(1, %s, sizeof(argv[I]));
	write(1, "\n", 1);
    }
}
