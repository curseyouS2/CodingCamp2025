#include<stdio.h>

int main(void) {

	int totalsec = 0; int sec = 0; 
	int min = 0; int hour = 0;

	while (1) {

		printf("����� �ð�, ��, �� �Է�: ");
		scanf("%d %d %d", &hour, &min, &sec);
		
		totalsec = (hour * 3600) + (min * 60) + sec;

		printf("%d�ð� %d�� %d�ʴ� %d���Դϴ�...\n", hour, min, sec, totalsec);

	}

	return 0;
}