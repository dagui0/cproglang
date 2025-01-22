#include <stdio.h>
#include <stdlib.h>


struct s { int i; };


int main() {
    struct s *p = malloc(sizeof(struct s));
    p->i = 123;

    printf("p(%d): %p\n", p->i, (void *) p);
    free(p);

    // p is dangling
    printf("p(%d): %p\n", p->i, (void *) p);

    struct s *p2 = malloc(sizeof(struct s));
    printf("p(%d): %p\n", p->i, (void *) p);
    printf("p2(%d): %p\n", p2->i, (void *) p2);

    p2->i = 456;
    // p and p2 are valid
    printf("p(%d): %p\n", p->i, (void *) p);
    printf("p2(%d): %p\n", p2->i, (void *) p2);
    free(p2);

    // p and p2 are dangling
    printf("p(%d): %p\n", p->i, (void *) p);
    printf("p2(%d): %p\n", p2->i, (void *) p2);
}
