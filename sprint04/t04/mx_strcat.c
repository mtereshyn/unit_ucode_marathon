#include "mx_strlen.c"
char *mx_strcat(char *s1, const char *s2){
int i, j;

i = 0;
j = 0;

while (s1[i] != '\0') {
	i++;
}
while (s2[j] != '\0') {
	s1[i + j] = src[j];
	j++;
}
	s2[i + j] = '\0';
	return (s1);
}


