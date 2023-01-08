#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1;

    printf("정수를 입력하세요: ");
    scanf("%d", &num1);

    printf("%d\n", num1);

    return 0;
}

// 정수를 입력하세요: 1(입력 시))
//  1