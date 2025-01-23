//1-12
#include<stdio.h>

int main(void) {

	int num = 0;
	int one = 0, ten = 0, hund = 0, thou = 0; //같은 자료형이면 한번에 선언해도 ㅇㅋ
	
	while (1) {
		printf("4자리 이하의 정수 입력: ");
		scanf("%d", &num);
		if (num > 10000) {
			printf("제대로 입력하지 않으면 죽이겠다!!!(코로스)\n\n");
		}
		else {

			thou = num / 1000;
			hund = (num % 1000) / 100;
			ten = ((num % 1000) % 100) / 10;
			one = ((num % 1000) % 100) % 10;
			int sum = thou + hund + ten + one;

			printf("%d + %d + %d + %d = %d\n\n", thou, hund, ten, one, sum);
		}
	}

	return 0;
}