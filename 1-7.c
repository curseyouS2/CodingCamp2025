#include <stdio.h>


int main(void) {

	int apple= 0;
	int box = 0;
	while (1) {
		printf("사과 수 입력 : ");
		scanf("%d", &apple);
		/*몫이 0보다 크면 상자 개수 몫+1 0이면 걍 몫 ㄱㄱ*/
		if (apple % 20 > 0)
			box = (apple / 20) + 1;
		if (apple % 20 == 0)
			box = apple / 20;

		printf("상자 수 = : %d\n", box);

	}

	return 0;
}

/*
오류 1번: 조건연산자 '같다'는 '=='
처음에 걍 =라고 함 ㅋㅋ
*/