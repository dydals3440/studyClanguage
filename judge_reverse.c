#include <stdio.h>

int main()
{
    int num1, i;
    scanf("%d", &num1);

    for (i = 0; i < 5; i++)
    {
        printf("%d ", num1 % 10);
        num1 /= 10; // 43561 / 10 => 4356 이런식으로 계속 초기화
    }

    return 0;
}