#include <stdio.h>

int sigma(int);
int sum = 0;
int main(void)
{
    int n = 0;
    printf("n을 입력해주세요 : ");
    scanf("%d", &n);
    printf("1부터 %d까지의 합 : %d", n, sigma(n));

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