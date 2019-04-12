#include <stdio.h>

/*
  long类型为整型之一。
  常用于较大数值的场合。
*/

int main(void)
{
    long a = 1;
    long b = 1L;
    

    int size = sizeof(long);
    printf("long类型最大字节数：%d \n", size); // 4
    // long类型的最大位数为size * 8
    int length = sizeof(long long);
    printf("long long类型最大字符数：%d \n", length);
    

    return 0;
}
