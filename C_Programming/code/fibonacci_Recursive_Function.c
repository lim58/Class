// 재귀함수 이용하여 n번째 피보나치 수 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int num)
{
    if (num == 1 || num == 2) return 1;

    return func(num-2) + func(num-1);
}

int main()
{
    int n;
    printf("몇 번째 피보나치 수 출력? ");
    scanf("%d", &n);
    printf("%d번째 피보나치 수 : %d", n, func(n));

    return 0;
}