#include<stdio.h>

int main(void) {

	printf("short의 크기: %d\n", sizeof(short));
	printf("unsigned short의 크기: %d\n", sizeof(unsigned short));
	printf("int의 크기: %d\n", sizeof(int));
	printf("unsigned int의 크기: %d\n", sizeof(unsigned int));
	printf("long의 크기: %d\n", sizeof(long));
	printf("unsigned long의 크기: %d\n", sizeof(unsigned long));
	printf("float의 크기: %d\n", sizeof(float));
	printf("double의 크기: %d\n", sizeof(double));
	printf("long double의 크기: %d\n", sizeof(long double));
	printf("char의 크기: %d\n", sizeof(char));


	return 0;
}