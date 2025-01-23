#include<stdio.h>

int main(void) {

	int totalsec = 0; int sec = 0; 
	int min = 0; int hour = 0;

	while (1) {

		printf("계산할 초 입력: ");
		scanf("%d", &totalsec);
		hour = totalsec / 3600;
		min = (totalsec % 3600) / 60;
		sec = (totalsec - (hour * 3600)) - (min * 60);
		printf("%d초는 %d시간 %d분 %d초입니다...\n", totalsec, hour, min, sec);

	}

	return 0;
}