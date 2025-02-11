#include <stdio.h>


int main(void) {

	double a = 0;
	double b = 0;

	while (1) {

		printf("첫번쨰 수 입력: ");
		scanf("%lf", &a);
		printf("두번쨰 수 입력: ");
		scanf("%lf", &b);
		printf("합: %lf\n", a + b);
		if (a >= b) {
			printf("차: %lf\n", a - b);
		}
		else
			printf("차: %lf\n", b - a);
		printf("곱: %lf\n", a * b);
		printf("몫: %lf\n", a / b);

	}


	return 0;
}