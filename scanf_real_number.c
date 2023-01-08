#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    float num1;

    printf("실수를 입력하세요: ");
    scanf("%f", &num1);

    printf("%f\n", num1);

    return 0;
}

// 실수를 입력하세요: 1.1
// 1.100000