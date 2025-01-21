#include <stdio.h>

int main(void) {

	int x = 1, y = 1, z = 1;

	printf("x = %d, y = %d, z = %d\n", x, y, z);     // 1, 1, 1
	printf("x = %d, y = %d, z = %d\n", ++x, y++, z); // 2, 1, 1
	printf("x = %d, y = %d, z = %d\n", x, y, z);     // 2, 2, 1

	printf("x = %d, y = %d, z = %d\n", x, y, (z = (++x + y++)));     // 2, 2, 5

	x = 20, y = 3;
	printf("x %% y = %d %% %d = %d\n", x, y, (z = x % y)); // 20, 3, 2

	x = y == y++;
	printf("x = %d, y = %d, z = %d\n", x, y, z);     // 1, 4, 2

	return 0;
}
