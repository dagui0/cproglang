#include <stdio.h>
#include <stdlib.h>

plus(a, b)
int a;
int b;
{
    return a + b;
}

char*
name() {
    return "Daekyu Lee";
}

main()
{
    printf("%s: a = %d, b = %d, c = %d\n", name(), 3, 4, plus(3, 4));
    exit(0);
}
