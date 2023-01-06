#include <stdio.h>
int main()
{
    // 1byte 부호 있는 정수형으로 변수 선언 값 할당
    char num1 = -10;
    // 2byte 부호 있는 정수형으로 변수 선언 값 할당
    short num2 = 30000;
    // 4byte 부호 있는 정수형으로 변수 선언
    int num3 = -1234567890;
    // 4byte 부호 있는 정수형으로 변수 선언
    long num4 = 1234567890;
    // 8byte 부호 있는 정수형으로 변수 선언
    long long num5 = -1234567890123456789;

    // char, short, int는 %d로 출력하고 %long 은 %ld, long long은 %lld로 출력
    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
    // -10 30000 -1234567890 1234567890 -1234567890123456789 출력

    return 0;
}