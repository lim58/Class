// 재귀함수 사용하여 두 수 사이 홀수 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n2;
void odd(int num1)
{
    if (n2 == num1) return;
    if (num1 % 2 == 1) printf("%d ", num1);
    return odd(num1 + 1);
}

int main()
{
    int n1;
    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &n1, &n2);
    odd(n1);

    return 0;
}
