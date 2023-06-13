// 재귀함수 사용하여 팩토리얼 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int num)
{
    if (num == 0) return 1;
    return num * func(num - 1);
}

int main()
{
    int n;
    printf("자연수를 입력하세요 : ");
    scanf("%d", &n);
    printf("%d! = %d", n, func(n));

    return 0;
}
