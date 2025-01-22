#include <stdio.h>


int f(void);

int main(void) {

    int *p = (int[]){ 2, 4 };
    int length = 2;

    for (int i = 0; i < length; i++) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    printf("f() == %d\n", f());
    return 0;
}

int f(void) {

    struct s {int i;} *p = 0, *q = 0;
    int j = 0;

    printf("%d: p(%d) = %p, q(%d) = %p\n", j, (p==NULL)?0:p->i, p, (q==NULL)?0:q->i, q);

again:
    q = p, p = &((struct s){ j++ });
    printf("%d: p(%d) = %p, q(%d) = %p\n", j, (p==NULL)?0:p->i, p, (q==NULL)?0:q->i, q);
    if (j < 2)
        goto again;
    
    printf("%d: p(%d) = %p, q(%d) = %p\n", j, (p==NULL)?0:p->i, p, (q==NULL)?0:q->i, q);
    return p == q && p->i == 1;
}
