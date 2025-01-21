#include <stdio.h>
#include <stdlib.h>
#include <bo.h>

int main(int argc, char** argv) {
        signed int int_val = -1;
        signed long long_val = -1;
        signed long long long_long_val = -1;

        if (argc > 1)
            long_long_val = atoll(argv[1]);
        long_val = (long)long_long_val;
        int_val = (int)long_long_val;

        printf("int       (%01d bytes) = %d\n", sizeof(int_val), int_val);
        bo_print(&int_val, sizeof(int_val));

        printf("long      (%01d bytes) = %ld\n", sizeof(long_val), long_val);
        bo_print(&long_val, sizeof(long_val));

        printf("long long (%01d bytes) = %ld\n", sizeof(long_long_val), long_long_val);
        bo_print(&long_long_val, sizeof(long_long_val));

        return 0;
}
