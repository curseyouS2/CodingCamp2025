#include<stdio.h>

int main(void) {

	int totalsec = 0; int sec = 0; 
	int min = 0; int hour = 0;

	while (1) {

		printf("계산할 시간, 분, 초 입력: ");
		scanf("%d %d %d", &hour, &min, &sec);
		
		totalsec = (hour * 3600) + (min * 60) + sec;

		printf("%d시간 %d분 %d초는 %d초입니다...\n", hour, min, sec, totalsec);

	}

	return 0;
}