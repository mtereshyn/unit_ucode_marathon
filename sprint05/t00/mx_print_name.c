#include "mx_printchar.c"
#include "mx_printint.c"
#include "mx_printstr.c"

int main(int argc, char *argv[])
{
    mx_printstr(argv[0]);
    mx_printchar('\n');
    mx_printint(argc);

}
