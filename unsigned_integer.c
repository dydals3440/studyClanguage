#include <stdio.h>

int main()
{
    // 1바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
    unsigned char num1 = 200;
    // 2바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
    unsigned short num2 = 60000;
    // 4바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
    unsigned int num3 = 4123456789;
    // 4바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
    unsigned long num4 = 4123456789;
    // 8바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
    unsigned long long num5 = 12345678901234567890;

    // unsigned char , unsigned short, unsigned int => %u로 출력
    // unsigned long => %lu, unsigned long long => %llu
    printf("%u %u %u %lu %llu\n", num1, num2, num3, num4, num5);

    return 0;
}