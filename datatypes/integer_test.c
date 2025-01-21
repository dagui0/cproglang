#include <stdio.h>
#include <stdlib.h>
#include <bo.h>

#ifdef __x86_64__
#define SIZE_FMT "%1lu"
#else
#define SIZE_FMT "%1u"
#endif

int main(int argc, char** argv) {
        signed int int_val = -1;
        signed long long_val = -1;
        signed long long long_long_val = -1;

        if (argc > 1)
            long_long_val = atoll(argv[1]);
        long_val = (long)long_long_val;
        int_val = (int)long_long_val;

        printf("int       (" SIZE_FMT " bytes) = %d\n", sizeof(int_val), int_val);
        bo_print(&int_val, sizeof(int_val));

        printf("long      (" SIZE_FMT " bytes) = %ld\n", sizeof(long_val), long_val);
        bo_print(&long_val, sizeof(long_val));

        printf("long long (" SIZE_FMT " bytes) = %lld\n", sizeof(long_long_val), long_long_val);
        bo_print(&long_long_val, sizeof(long_long_val));

        return 0;
}
