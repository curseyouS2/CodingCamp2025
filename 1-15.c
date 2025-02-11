#include <stdio.h>
#include <math.h>

int main(void) {

	int num = 0;

	while (1) {
		int i = 1; //반복, 제곱
		int j = 1; //기본 자리수 1

 		printf("정수입력: ");
		scanf("%d", &num);
		
		for (i;;i++) {
			if (num / int((pow(10.0, double(i)))) == 0) {

				printf("자리수=%d\n", j);
				break;

			}else {

				j++;
				continue;

			}
		}
	}
	return 0;
}

/*
제곱 표현하기
1. 반복문 쓰기...
2. 내장 함수 pow함수 사용 (math.h)

처음에 왜 오류가 났나?
1. if문 조건에서 num은 int고 pow함수 값은 double이여서 비교가 불가했음.
2. if문 형변환할때 괄호가 많이 들어가서 조건 닫는 괄호가 없는지 몰랐음.
3. 모든 반복문 작동 이후에 i++가 되는 것을 간과해서(내가 for문에 달아놓고도) 
for문 안에 또 i++ 넣어놓는 바람에 값이 이상하게 나옴. 고침 근데 ㅋㅋ  앙~

알게된 것 
1. 같은 자료형끼리 연산해야한다.
2. pow함수의 값은 double(실수)로 나온다.
3. c언어에는 제곱 연산자가 따로 있지는 않다는 것...
*/