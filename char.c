#include <stdio.h>

int main()
{
    char c1 = 'a';
    char c2 = 'b';

    // char %c로 출력하면 문자가 출력되고, %d로 출력하면 정숫값이 출력됨
    printf("%c, %d\n", c1, c1);
    printf("%c, %d\n", c2, c2);

    return 0;

    // a, 97
    // b, 98
}