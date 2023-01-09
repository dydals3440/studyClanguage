#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 2;

    // 2 2: num1, num2의 값을 먼저 출력한 뒤
    printf("%d %d\n", num1++, num2--);
    // 증감 연산자 동작
    printf("%d %d\n", num1, num2);
    // 출력 3 1

    return 0;
}

/*
2 2
3 1
*/