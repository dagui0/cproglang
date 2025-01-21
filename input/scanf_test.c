#include <stdio.h>

int main(void) {

	double height, weight, bmi;

	printf("몸무게를 입력해 주세요(kg): ");
	scanf("%lf", &weight);
	
	printf("키를 입력해 주세요(cm): ");
	scanf("%lf", &height);

	bmi = weight / (height*height/10000);

	printf("키: %lf\n", height);
	printf("몸무게: %lf\n", weight);
	printf("BMI: %lf\n", bmi);

	return 0;
}
