#include <stdio.h>
#include <ctype.h>

//char GetData(void);

int main(void) {

	char ID[] = "Hansung";
	char PW[] = "Computer";
	char UserID[100];
	char UserPW[100];

	int i=0;

	printf("���̵� : ");
	gets_s(UserID, sizeof(UserID));

	while (ID[i] != '\0') { //�Է�  id�� ������ �ʾҰ� ����  id�� ������ �ʾҴٸ� �ݺ�
		if (UserID[i] != ID[i]) {
			printf("��ϵ��� ���� ���̵��Դϴ�.");
			break;
		}
		i++;
	}
	
	if (ID[i] == '\0') {
		printf("��й�ȣ : ");
		gets_s(UserPW, sizeof(UserPW));
		i = 0;
		while (PW[i] != '\0') { //�񱳿� PW�� ���������� �ݺ�
			if (UserID[i] != ID[i]) {
				printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.");
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
			printf("�� ȯ���մϴ�.");
			
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
//ù��° ����: �ƿ� �ٸ� �� �Է����� ���� �۵�, ���� ID�� ������ ��(��: Han)�� �Է����� �� ����ġ �˸��� ������ ����........
//�ذ�: while ������ �� ���� ID�� �ۼ� 