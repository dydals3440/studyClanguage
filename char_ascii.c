#include <stdio.h>
int main()
{
    char c1 = 97; // a의 ASCII 코드 값 97 저장
    char c2 = 98; // b의 ASCII 코드 값 98 저장

    // char를 % c로 출력하면 문자가 출력되고, % d로 출력하면 정숫값이 출력됨.
    printf("%c, %d\n", c1, c1);
    printf("%c, %d\n", c2, c2);

    return 0;

    // a, 97
    // b, 98
}