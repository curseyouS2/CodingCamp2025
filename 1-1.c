#include <stdio.h>


int main(void) {

	int a = 0;
	int b = 0;
	int c = 0;

	while (1) {

		printf("ù��° �� �Է�: ");
		scanf("%d", &a);
		printf("�ι�° �� �Է�: ");
		scanf("%d", &b);
		printf("����° �� �Է�: ");
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