#include <stdio.h>

int main()
{
    // long 크기의 정수 리터럴
    printf("%ld\n", -10L);
    // long long 크기의 정수 리터럴
    printf("%lld\n", -123456789LL);

    // unsigned int 크기의 정수 리터럴
    printf("%u\n", 10U);
    // unsigned long 크기의 정수 리터럴
    printf("%lu\n", 1234567890UL);

    // unsigned long 크기의 정수 리터럴
    printf("%lu\n", 10UL);
    // unsigned long long 크기의 정수 리터럴
    printf("%llu\n", 1234567890123456789ULL);

    return 0;
}