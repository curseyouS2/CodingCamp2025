#include <stdio.h>
#include <string.h>

void str_reverse(char arr[], int size);  //������� ���� �ĺ���: �ڷ��� �� �ٿ��ٰ��..

int main(void) {
	
	int size;
	char str[100] = { 0 };
	gets_s(str, sizeof(str));
	size = strlen(str);  //���ڿ��� ���̸� �˰���� �� strlen�� ����ϵ��� ����...(����)
	printf("%d", size);
	str_reverse(str, size);

	return 0;
}

void str_reverse(char arr[], int size) {
	for (int i = size ; i >= 0 ; i--) {
		
		printf("%c", arr[i]);
		
		
	}
}