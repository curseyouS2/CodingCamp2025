#include <stdio.h>


int main(void) {

	double base = 0, height = 0;

	printf("�غ�, ���� : ");
	scanf("%lf %lf", &base, &height);
	double area = (base * height) / 2;

	printf("�غ�=%.2lfcm, ����=%.2lfcm�� �ﰢ���� ����=%.2lfcm�� : ", base, height, area);

	return 0;
}

/*ù���� ����...
Run-Time Check Failure #2 - Stack around the variable 'base' was corrupted.
����ڰ� ������ �ͺ��� �� ū ���� �������� �� �� �߻��Ѵ�...
double�� �ٲٴϱ� �ذ�ƴ�....
��ƾƾƾƾ�~~~~
ũ��������
�����ϸ� double ����

*/