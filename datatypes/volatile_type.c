#include <stdio.h>

int main(void) {

    volatile int n = 1;
    int *p = (int*)&n;

    printf("%d\n", *p);

    return 0;
}
