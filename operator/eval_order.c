#include <stdio.h>

#define TRUE 1
#define FALSE 0

int func1(int a, int b);
int func2(int i, int j);
int func3(int m, int n);

int main(void) {

    int c = func1(1, 2) + func2(3, 4) + func3(5, 6);
    printf("func1(1, 2) + func2(3, 4) + func3(5, 6) = %d\n", c);
    printf("-------------------------------------------\n");

    int r = func1(1, 2) > 0 || func2(3, 4) > 0;
    printf("r = %d\n", r);
    printf("-------------------------------------------\n");

    int ii = 0, jj = 2, kk = 0;
    if (jj > 0)
        kk++;
    ii = jj > 0 || ++kk > 0;
    printf("ii = %d, jj = %d, kk = %d\n", ii, jj, kk);
    printf("-------------------------------------------\n");

    return 0;
}

int func1(int a, int b) {
    int c = 0, d = 1;
    printf("func1(%d, %d) <- (&a = %p, &b = %p, &c = %p, &d = %p)\n", a, b, &a, &b, &c, &d);
    return a+b;
}

int func2(int a, int b) {
    printf("func2(%d, %d) <- (%p, %p)\n", a, b, &a, &b);
    return a + b;
}

int func3(int a, int b) {
    printf("func3(%d, %d) <- (%p, %p)\n", a, b, &a, &b);
    return a + b;
}

