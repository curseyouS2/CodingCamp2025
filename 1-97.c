#include <stdio.h>

int round(double);

int main(void)
{
    double f;
    printf("실수 입력 : ");
    scanf("%lf", &f);
    printf("반올림 결과 : %d", round(f));

    return 0;
}

int round(double f) {
    int n = f + 0.5;
    return n;
}
