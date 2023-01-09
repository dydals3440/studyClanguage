#include <stdio.h>

int main()
{
    int num1;
    int num2;

    num1 = 2 * 3;
    num2 = 7 / 2;

    printf("%d\n", num1);
    printf("%d\n", num2); // 소숫점 사용하지 않고 최대한 나눌 수 있는 값이 3

    return 0;
}

// 6 3

//  num1 = 1 / 0; 실행할 경우
//  mul_div_integer.c(9): error C2124: 0으로 나누기 또는 나머지 연산을 수행했습니다. 라고 컴파일 에러 발생!