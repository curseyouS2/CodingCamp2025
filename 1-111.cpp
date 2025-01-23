#include <stdio.h>
#include <string.h>

void str_reverse(char arr[], int size);  //선언되지 않은 식별자: 자료형 안 붙였다고요..

int main(void) {
	
	int size;
	char str[100] = { 0 };
	gets_s(str, sizeof(str));
	size = strlen(str);  //문자열의 길이를 알고싶을 땐 strlen을 사용하도록 하자...(제발)
	printf("%d", size);
	str_reverse(str, size);

	return 0;
}

void str_reverse(char arr[], int size) {
	for (int i = size ; i >= 0 ; i--) {
		
		printf("%c", arr[i]);
		
		
	}
}