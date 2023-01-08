#include <stdio.h>

int main()
{
    // long 크기의 8진 정수 리터럴
    printf("0%lo\n", 017L);
    // unsigned long 크기의 8진 정수 리터럴
    printf("0%lo\n", 017UL);
    // long 크기의 16진 정수 리터럴
    printf("0x%lX\n", 0x7FFFFL);
    // unsigned long 크기의 16진수 정수 리터럴
    printf("0x%lX\n", 0xFFFFFFFFUL);

    return 0;
}

/*
017
017
0x7FFFF
0xFFFFFFFF
*/