#include<stdio.h>

int main(void) {

	double mile = 0;
	double k_meter = 0;

	while (1) {
	
		printf("변환할 마일 값을 입력: ");
		scanf("%lf", &mile);

		k_meter = mile * 1.60935;

		printf("%lf 마일은 %lf 킬로미터 입니다...\n", mile, k_meter);
	
	}
}