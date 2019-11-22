#include <stdio.h>
#include <stdlib.h>
#include "mx_strlen.c"
#include "mx_strnew.c"
#include "mx_isspace.c"
char *mx_strtrim(const char *str) {
        int count = 0;
        while(mx_isspace(str[count])) count++;
        char *tmp_str = mx_strnew(mx_strlen(str) - count);
        for (int i = count, j = 0; i < mx_strlen(str); i++, j++) {
                tmp_str[j] = str[i];
        }
        count = mx_strlen(tmp_str);
        while(mx_isspace(str[count])) count--;
        char *res = mx_strnew(count);
        for (int i = 0; i < count - 2; i++) {
                res [i] = tmp_str[i];
        }
        res[count - 2] = '\0';
        return res;
}
