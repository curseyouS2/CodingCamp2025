#include <stdio.h>

int sigma(int);
int sum = 0;
int main(void)
{
    int n = 0;
    printf("n�� �Է����ּ��� : ");
    scanf("%d", &n);
    printf("1���� %d������ �� : %d", n, sigma(n));

    return 0;
}

int sigma(int n) {
    
    if (n == 0) {
        return sum;
    }
    sum += n;
    if (n == 0) {
        return sum;
    }
    sigma(n - 1);
    
}