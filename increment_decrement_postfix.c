#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 2;
    int num3;
    int num4;

    // 후위 연산자인 경우에는 할당을 num3 먼저하고 그다음에 증가 연산을 해준다. 그래서 값이 변동되지 않는다.
    num3 = num1++;
    num4 = num2--;

    printf("%d %d\n", num3, num4);

    return 0;
}

/*
2 2
*/