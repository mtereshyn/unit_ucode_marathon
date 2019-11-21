#include <unistd.h>
void mx_only_printable(void) {
    for (int a = 126; a >= 32; a--) {
    write(1, &a, sizeof(a));
    write(1, "\n", 1);
}
}

