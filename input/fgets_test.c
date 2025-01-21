#include <stdio.h>
#include "chomp.h"

int main(void) {

	char* name;
	char buf[BUFSIZ];

	printf("이름을 입력해 주세요: ");
	name = chomp(fgets(buf, BUFSIZ, stdin));

	printf("이름: %s\n", name);

	return 0;
}
