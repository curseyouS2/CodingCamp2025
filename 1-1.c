#include <stdio.h>


int main(void) {

	int a = 0;
	int b = 0;
	int c = 0;

	while (1) {

		printf("첫번째 수 입력: ");
		scanf("%d", &a);
		printf("두번째 수 입력: ");
		scanf("%d", &b);
		printf("세번째 수 입력: ");
		scanf("%d", &c);

		if (a >= b && a >= c)
			printf("%d\n", a);

		if (b >= a && b >= c)
			printf("%d\n", b);

		if (c >= a && c >= b)
			printf("%d\n", c);
	}
	

	return 0;
}