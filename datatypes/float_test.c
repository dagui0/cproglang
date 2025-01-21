#include <stdio.h>
#include <stdlib.h>
#include <bo.h>

int main(int argc, char** argv) {
        float float_val = 1.0;
        double double_val = 1.0;

        if (argc > 1)
            double_val = atof(argv[1]);
        float_val = (float)double_val;

        printf("float  (%01ld bytes) = %f\n", sizeof(float_val), float_val);
        bo_print(&float_val, sizeof(float_val));

        printf("double (%01ld bytes) = %lf\n", sizeof(double_val), double_val);
        bo_print(&double_val, sizeof(double_val));

        return 0;
}
