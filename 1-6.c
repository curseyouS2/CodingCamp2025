#include <stdio.h>


int main(void) {

	double base = 0, height = 0;

	printf("밑변, 높이 : ");
	scanf("%lf %lf", &base, &height);
	double area = (base * height) / 2;

	printf("밑변=%.2lfcm, 높이=%.2lfcm인 삼각형의 면적=%.2lfcm² : ", base, height, area);

	return 0;
}

/*첫번쨰 오류...
Run-Time Check Failure #2 - Stack around the variable 'base' was corrupted.
사용자가 지정한 것보다 더 큰 값을 넣으려고 할 떄 발생한다...
double로 바꾸니까 해결됐다....
듀아아아아아~~~~
크기차이임
웬만하면 double ㄱㄱ

*/