//1-12
#include<stdio.h>

int main(void) {

	int num = 0;
	int one = 0, ten = 0, hund = 0, thou = 0; //���� �ڷ����̸� �ѹ��� �����ص� ����
	
	while (1) {
		printf("4�ڸ� ������ ���� �Է�: ");
		scanf("%d", &num);
		if (num > 10000) {
			printf("����� �Է����� ������ ���̰ڴ�!!!(�ڷν�)\n\n");
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