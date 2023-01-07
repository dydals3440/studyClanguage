#include <stdio.h>

int main()
{
    // 지수 표기법으로 300000을 표기
    float num1 = 3.e5f;
    // 지수 표기법으로 =-0.013827 표기
    double num2 = -1.3827e-2;
    // 지수 표기법으로 5210000000 표기
    // long double 은 숫자 뒤에 1을 붙임
    long double num3 = 5.21e+9l;

    // float, double은 %f로 출력, long double은 %Lf로 출력
    printf("%f %f %Lf\n", num1, num2, num3); // 300000.000000 -0.013827 5210000000.00000

    // 지수(exponent) 표기법으로 출력할 떄는 float와 double은 %e로 출력, long double은 %Le로 출력
    printf("%e %e %Le\n", num1, num2, num3); // 3.000000e+05 -1.382700e-02 5.210000e+09

    return 0;
}