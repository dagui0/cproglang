#include <stdio.h>
#include <stdlib.h>
#include <bo.h>

int main(int argc, char **argv) {

    int val = 0;
    if (argc > 1)
        val = atoi(argv[1]);

    printf("val = %d\n", val);

    char buf[BUFSIZ];
    bo_sprint(buf, &val, sizeof(val));
    printf("base 2 of %d is %s\n", val, buf);

    return 0;
}
