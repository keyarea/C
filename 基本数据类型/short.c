#include <stdio.h>

/*
  short为整型之一，其存储的数值比int要少。
  常用与较小数值的场合节省存储空间
*/

int main(void)
{
    short a = 1;
    unsigned b = 1;

    int size = sizeof(short);
    printf("short最大字节数为：%d", size); // 2
    // 其最大位数为24位，一个字节8位    

    return 0;
}
