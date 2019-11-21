#include <stdio.h>
#include "mx_strcmp.c"

int mx_binary_search(char **arr, int size, const char *s, int *count)
{
    int lg =0, rg = size -1, mid;
    int ccount;

    while(1)
    {
        ccount++;
        mid =(lg + rg)/2;

        *count = ccount;

        if (mx_strcmp(s, arr[mid])<0)
        {
            rg = mid - 1;
        }
        else if (mx_strcmp(s, arr[mid])>0)
        {
            lg = mid + 1;
        }
        else
        {
            return mid;
        }

        if (lg>rg)
        {
            return -1;
        }

    }
}


