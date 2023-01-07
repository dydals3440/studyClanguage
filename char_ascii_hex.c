#include <stdio.h>
int main()
{
    char c1 = 0x61; // a의 ASCII 코드 값 97 저장
    char c2 = 0x62; // b의 ASCII 코드 값 98 저장

    // char를 % c로 출력하면 문자가 출력되고, % d로 출력하면 정숫값이 출력됨.
    printf("%c, %d, 0x%x\n", c1, c1);
    printf("%c, %d, 0x%x\n", c2, c2);

    return 0;

    // a, 97, 0x61
    // b, 98, 0x62
}