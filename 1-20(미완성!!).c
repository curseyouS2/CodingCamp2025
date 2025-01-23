//1-20 비밀번호를 등록하는 프로그램
//비밀번호는 영문, 숫자를 포함한 8자 이상!!
//비밀번호를 한 번 더 입력해서 확인까지~
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>



void regist_pw(void);
void ckeck_pw(char str[]);

bool digitok = 0;
bool alphaok = 0;

bool complete = 0;

int main(void) {


	char pw[100] = { 0 };
	gets_s(pw, sizeof(pw));
	printf("입력한 번호는: ");
	for (int i = 0;i < strlen(pw);i++) {
		printf("%c", pw[i]);
	}
	
	check_pw_(pw);

	//while (complete == '0') {

	//}

	if (complete == '1') {
		printf("비밀번호가 등록되었습니다...");
	}

	return 0;
}



void ckeck_pw(char str[]) {
	;
}