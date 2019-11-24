#include <unistd.h>
#include "mx_printchar.c"

void mx_printint(int n)
{  int x,reverse;
    reverse = 0;
    while(n)
    {
        reverse = reverse*10+n%10;
        n/=10;
    }
    while(reverse>0)
    {
        x=reverse%10;
        mx_printchar(x + '0');
        reverse = reverse/10;
    }
}

