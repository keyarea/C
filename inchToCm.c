#include <stdio.h>

int main(int argc, char const *argv[])
{
    float inch = 0;
    float cm = 0;
    printf("输入一个英寸值以换算成厘米值：");
    scanf("%f", &inch);
    cm = inch * 2.54;
    printf("换算成厘米值为：%f", cm);
    return 0;
}
