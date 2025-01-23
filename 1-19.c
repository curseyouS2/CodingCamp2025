#include <stdio.h>
#include <ctype.h>

//char GetData(void);

int main(void) {

	char ID[] = "Hansung";
	char PW[] = "Computer";
	char UserID[100];
	char UserPW[100];

	int i=0;

	printf("아이디 : ");
	gets_s(UserID, sizeof(UserID));

	while (ID[i] != '\0') { //입력  id가 끝나지 않았고 원래  id가 끝나지 않았다면 반복
		if (UserID[i] != ID[i]) {
			printf("등록되지 않은 아이디입니다.");
			break;
		}
		i++;
	}
	
	if (ID[i] == '\0') {
		printf("비밀번호 : ");
		gets_s(UserPW, sizeof(UserPW));
		i = 0;
		while (PW[i] != '\0') { //비교용 PW가 끝날때까지 반복
			if (UserID[i] != ID[i]) {
				printf("비밀번호가 틀렸습니다.");
				break;
			}
			i++;
		}
		if (PW[i] == '\0') {
			i = 0;
			while (ID[i] != '\0') {
				printf("%c", ID[i]);
				i++;
			}
			printf("님 환영합니다.");
			
		}
	}

	//UserData = GetData();
	
	return 0;
}

/*char GetData(void) {

	char data[100];
	gets_s(data, sizeof(Data));
	return data;

}*/
//첫번째 문제: 아예 다른 걸 입력햇을 때는 작동, 원래 ID와 유사한 것(예: Han)을 입력했을 시 불일치 알림이 나오지 않음........
//해결: while 조건을 비교 기준 ID로 작성 