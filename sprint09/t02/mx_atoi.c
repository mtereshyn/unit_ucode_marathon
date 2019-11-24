#include <stdio.h>
#include "mx_isdigit.c"
#include "mx_isspace.c"

int mx_atoi(const char *str)
{
    int i = 0;
       int tmp=0;
       char a;
       int ia;
       while (true== mx_isdigit(str[i])&& mx_isdigit(str[i])==true)
        {
            tmp *=10;
           a = str[i];
           ia = (a - '0');
           tmp +=ia;

           i++;
        }
       return tmp;
}

