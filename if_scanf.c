#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);

    if (num1 == 10)
    {
        printf("10입니다.\n"); // 10 입니다를 출력
    }

    if (num1 == 20)
    {
        printf("20입니다.\n");
    }

    return 0;
}

/*
10(입력)
10입니다.
*/