#include <stdio.h>

int main()
{
    const int con1 = 1;
    // 이미 위에서 상수 값을 할당해줬는데 다시 또 할당하면 에러발생.
    con1 = 2;
    printf("%d\n", con1);
    return 0;
}

/*
const_assign_error.c:7:10: error: cannot assign to variable 'con1' with const-qualified type 'const int'
    con1 = 2;
    ~~~~ ^
const_assign_error.c:5:15: note: variable 'con1' declared const here
    const int con1 = 1;
    ~~~~~~~~~~^~~~~~~~
1 error generated.
*/
