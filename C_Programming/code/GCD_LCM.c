//최대공약수, 최고공배수 구하는 함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max = 0;

int GCD(int n1, int n2)
{
    for (int i = 1; i <= n1; i++)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            if (max < i)
            {
                max = i;
            }
        }
    }
    return max;
}

int LCM(int n1, int n2)
{
    int min = n1 * n2 / max;
//  최소공배수 = 두 수의 곱 / 최대공약수 

    return min;

}

int main()
{
    int num1, num2;
    printf("두 개의 자연수를 입력하세요 : ");
    scanf("%d %d", &num1, &num2);

    printf("두 수의 최대공약수 : %d\n", GCD(num1, num2));
    printf("두 수의 최소공배수 : %d\n", LCM(num1, num2));

    return 0;
}