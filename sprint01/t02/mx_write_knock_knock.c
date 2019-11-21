#include <unistd.h>
#include <string.h>

void mx_write_knock_knock(void) {
	char sent01[] = "Follow the white rabbit. \n";
        char sent02[] = "Knock, knock, Neo. \n";
        write(1, sent01, strlen(sent01));
        write(2, sent02, strlen(sent02));
}


