//1-20 ��й�ȣ�� ����ϴ� ���α׷�
//��й�ȣ�� ����, ���ڸ� ������ 8�� �̻�!!
//��й�ȣ�� �� �� �� �Է��ؼ� Ȯ�α���~
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
	printf("�Է��� ��ȣ��: ");
	for (int i = 0;i < strlen(pw);i++) {
		printf("%c", pw[i]);
	}
	
	check_pw_(pw);

	//while (complete == '0') {

	//}

	if (complete == '1') {
		printf("��й�ȣ�� ��ϵǾ����ϴ�...");
	}

	return 0;
}



void ckeck_pw(char str[]) {
	;
}