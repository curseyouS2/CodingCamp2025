#include<stdio.h>

int main(void) {

	double mile = 0;
	double k_meter = 0;

	while (1) {
	
		printf("��ȯ�� ���� ���� �Է�: ");
		scanf("%lf", &mile);

		k_meter = mile * 1.60935;

		printf("%lf ������ %lf ų�ι��� �Դϴ�...\n", mile, k_meter);
	
	}
}