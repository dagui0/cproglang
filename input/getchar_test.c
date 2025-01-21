#include <stdio.h>
#include <ctype.h>

int main(void) {

	char sex;
	char buf[BUFSIZ];
	printf("성별을 입력하세요(M/F): ");

	getsex:
	sex = (char)getchar();
	fgets(buf, BUFSIZ, stdin);

	if (sex == 'M' || sex == 'm' || sex == 'F' || sex == 'f') {
		sex = toupper(sex);
	}
	else {
		printf("\a성별을 입력해 주세요(M/F):");
		goto getsex;
	}

	printf("성별은 %c 입니다.\n", sex);
	return 0;
}
