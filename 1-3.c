#include <stdio.h>

int main(void) {

	long long int year;
	while (1) {

		printf("������ �Է�: ");
		scanf("%lld", &year);

		if (year % 4 == 0) {
			if (year % 100 == 0) {
				printf("%lld���� ������ �ƴմϴ�.\n", year);
			}
			else {
				if (year % 400 == 0) {
					printf("%lld���� ������ �ƴմϴ�.\n", year);
				}
				else {
					printf("%lld���� �����Դϴ�.\n", year);
				}
			}
		}
		else {
			printf("%lld���� ������ �ƴմϴ�.\n", year);
		}
	}
	

	return 0;
}