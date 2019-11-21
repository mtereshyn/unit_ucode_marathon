#include "mx_printstr.c"
#include "mx_printchar.c"

int main(int argc, char *argv[])
{
    int i = 0;
    while (i<=argc)
    {
        mx_printstr(argv[i]);
        mx_printchar('\n');
        i++;
    }
}
