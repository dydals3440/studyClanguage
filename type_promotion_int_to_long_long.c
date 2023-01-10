#include <stdio.h>

int main()
{
    long long num1 = 123456789000;
    int num2 = 10;

    printf("%lld\n", num1 + num2);
    printf("%lld\n", num1 - num2);
    printf("%lld\n", num1 * num2);
    printf("%lld\n", num1 / num2);

    return 0;
}

/*
123456789010
123456788990
1234567890000
12345678900
*/