#include<stdio.h>

int main(void) {

	int totalsec = 0; int sec = 0; 
	int min = 0; int hour = 0;

	while (1) {

		printf("����� �� �Է�: ");
		scanf("%d", &totalsec);
		hour = totalsec / 3600;
		min = (totalsec % 3600) / 60;
		sec = (totalsec - (hour * 3600)) - (min * 60);
		printf("%d�ʴ� %d�ð� %d�� %d���Դϴ�...\n", totalsec, hour, min, sec);

	}

	return 0;
}