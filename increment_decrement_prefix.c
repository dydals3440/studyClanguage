#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 2;
    int num3;
    int num4;
    // 전위(prefix)연산자 ++, -- 앞에 적음.
    num3 = ++num1;
    num4 = --num2;

    printf("%d %d\n", num3, num4);
}

/*
3
1
*/