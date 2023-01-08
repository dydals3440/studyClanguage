#include <stdio.h>
int main()
{
    // 실수 리터럴 소수점 표기

    printf("%f\n", 0.1f);
    printf("%f\n", 0.1F);

    // 실수 리터럴 지수 표기법

    printf("%f\n", 1.0e-5f);
    printf("%f\n", 1.0E-5f);

    return 0;
}

/*
0.100000
0.100000
0.000010
0.000010
*/