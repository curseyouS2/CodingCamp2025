#include <stdio.h>

int round(double);

int main(void)
{
    double f;
    printf("�Ǽ� �Է� : ");
    scanf("%lf", &f);
    printf("�ݿø� ��� : %d", round(f));

    return 0;
}

int round(double f) {
    int n = f + 0.5;
    return n;
}
