#include <stdio.h>


int main(void) {

	int apple= 0;
	int box = 0;
	while (1) {
		printf("��� �� �Է� : ");
		scanf("%d", &apple);
		/*���� 0���� ũ�� ���� ���� ��+1 0�̸� �� �� ����*/
		if (apple % 20 > 0)
			box = (apple / 20) + 1;
		if (apple % 20 == 0)
			box = apple / 20;

		printf("���� �� = : %d\n", box);

	}

	return 0;
}

/*
���� 1��: ���ǿ����� '����'�� '=='
ó���� �� =��� �� ����
*/