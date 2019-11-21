
#include <unistd.h>
int mx_strlen(const char *s);
void mx_printchar(char c);
char *mx_strchr(const char *s, int c);
void mx_printstr(const char *s);

int main(int argc, char *argv[])
{
	if(argc > 1){
		for(int i = 2; argv[0][i] != '\0'; i++){
			char arr[2];
			arr[0] = argv[0][i];
			write(1, &arr, 1);
		}
		write(1, "\n", 1);
	}
	return 0;
}
