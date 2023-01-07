#include <stdio.h>

int main()
{
    // 지수 표기법으로 30000을 표기
    // float 는 숫자 뒤에 f를 붙임
    float num1 = 0.1f;

    // 지수 표기법으로 -0.013827을 표기
    // double 은 숫자 뒤에 아무것도 붙이지 않음.
    double num2 = 3867.215820;

    // 지수 표기법으로 521000000을 표기
    // Long doouble 은 숫자 뒤에 l(영)을 붙임.
    long double num3 = 9.327513l;

    // float와 double은 %f로 출력, long double은 %Lf로 출력
    printf("%f %f %Lf\n", num1, num2, num3); // 0.100000 3867.215820 9.327513

    return 0;
}