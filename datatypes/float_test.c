#include <stdio.h>
#include <stdlib.h>
#include <bo.h>

#ifdef __x86_64__
#define SIZE_FMT "%1lu"
#else
#define SIZE_FMT "%1u"
#endif

int main(int argc, char** argv) {
        float float_val = 1.0;
        double double_val = 1.0;

        if (argc > 1)
            double_val = atof(argv[1]);
        float_val = (float)double_val;

        printf("float  (" SIZE_FMT " bytes) = %f\n", sizeof(float_val), float_val);
        bo_print(&float_val, sizeof(float_val));

        printf("double (" SIZE_FMT " bytes) = %lf\n", sizeof(double_val), double_val);
        bo_print(&double_val, sizeof(double_val));

        return 0;
}
