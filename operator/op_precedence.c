#include <stdio.h>

int main(void) {

    int a = 1, b = 2;
    int c = (a, b);

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}
