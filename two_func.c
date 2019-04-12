#include <stdio.h>

void butler(void); // 函数原型，告诉编译器要在程序中使用该函数

int main(void)
{
    printf("other function exec before! \n");
    butler();
    return 0;
}

void butler(void) /* 函数定义开始 */
{
    printf("other function exec! \n");
}
