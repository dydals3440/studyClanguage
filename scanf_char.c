#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    char c1;

    printf("문자를 입력하세요: ");
    scanf("%c", &c1);

    printf("%c\n", c1);

    return 0;
}

// 문자를 입력하세요: a
// a