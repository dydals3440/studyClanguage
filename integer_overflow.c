#include <stdio.h>

int main()
{
    // char에 저장할 수 있는 최댓값 127보다 더 큰 수를 할당 => 오버플로우 발생
    char num1 = 128;
    // unsigned char에 저장할 수 있는 최댓값 255 보다 더 큰 수를 할당 => 오버플로우 발생
    unsigned char num2 = 256;

    // -128 0: 저장할 수 있는 범위를 넘어서므로 최솟값부터 다시 시작
    printf("%d %u\n", num1, num2);

    return 0;
}

// 실행결과
// 128, 256이 아닌
// -128, 0 출력