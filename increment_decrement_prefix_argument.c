#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 2;

    // 3 1: 증감 연산자가 먼저 동작한 뒤
    printf("%d %d\n", ++num1, --num2);
    // num1, num2 값을 출력
    printf("%d %d\n", num1, num2);
    // 출력 3 1 앞과 동일한 값

    return 0;
}
/*
3 1
3 1
*/