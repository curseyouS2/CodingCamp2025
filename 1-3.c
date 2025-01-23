#include <stdio.h>

int main(void) {

	long long int year;
	while (1) {

		printf("연도를 입력: ");
		scanf("%lld", &year);

		if (year % 4 == 0) {
			if (year % 100 == 0) {
				printf("%lld년은 윤년이 아닙니다.\n", year);
			}
			else {
				if (year % 400 == 0) {
					printf("%lld년은 윤년이 아닙니다.\n", year);
				}
				else {
					printf("%lld년은 윤년입니다.\n", year);
				}
			}
		}
		else {
			printf("%lld년은 윤년이 아닙니다.\n", year);
		}
	}
	

	return 0;
}