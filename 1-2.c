#include <stdio.h>


int main(void) {

	double a = 0;
	double b = 0;

	while (1) {

		printf("ù���� �� �Է�: ");
		scanf("%lf", &a);
		printf("�ι��� �� �Է�: ");
		scanf("%lf", &b);
		printf("��: %lf\n", a + b);
		if (a >= b) {
			printf("��: %lf\n", a - b);
		}
		else
			printf("��: %lf\n", b - a);
		printf("��: %lf\n", a * b);
		printf("��: %lf\n", a / b);

	}


	return 0;
}