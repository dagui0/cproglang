#include <stdio.h>

int main(void) {

    int a = 1, b = 2;
    int c = (a, b);

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("----------------------------------------------------------------\n");

    int *p = (int[]){1, 11, 101};
    int *q = p;

    printf("a = %d, b = %d, c = %d, p = %p, q = %p\n", a, b, c, p, q);
    printf("++q = %p, p = %p, q = %p\n", ++q, p, q);
    p[0] = 1, p[1] = 11, p[2] = 101, q = p;
    printf("(++q)[1] = %d, p = %p, q = %p\n", (++q)[1], p, q);
    p[0] = 1, p[1] = 11, p[2] = 101, q = p;
    printf("++(q[1]) = %d, p = %p, q = %p\n", ++(q[1]), p, q);
    p[0] = 1, p[1] = 11, p[2] = 101, q = p;
    printf("++q[1] = %d, p = %p, q = %p\n", ++q[1], p, q);
    printf("----------------------------------------------------------------\n");

    struct s { int i, j; };
    struct s * sp = (struct s[]){{1001, 1005}, {10001, 10005}};
    struct s * sq = sp;

    printf("sq->i = %d, sq->j = %d, sp = %p, sq = %p\n", sq->i, sq->j, sp, sq);
    sp[0].i = 1001, sp[0].j = 1005, sp[1].i = 10001, sp[1].j = 10005, sq = sp;
    printf("++sq->i = %d, sq->j = %d, sp = %p, sq = %p\n", ++sq->i, sq->j, sp, sq);
    sp[0].i = 1001, sp[0].j = 1005, sp[1].i = 10001, sp[1].j = 10005, sq = sp;
    printf("(++sq)->i = %d, sq->j = %d, sp = %p, sq = %p\n", (++sq)->i, sq->j, sp, sq);
    printf("----------------------------------------------------------------\n");

    return 0;
}
