#include <stdio.h>

/*
  float浮点数类型。
  默认情况下，编译器假定浮点型常量是double类型的精度。
  在浮点数后面加上f或F后缀可赋给默认设置。
  使用l或L后缀使数字成为long double类型。
*/
int main(int argc, char const *argv[])
{
    float a = 0.0F;
    float b = 6.63e-34F;
    float c = .2F;
    float d = 100.F;
    float e = .8E-5F;

    // 打印浮点型
    // %f打印10进制计数法的浮点数
    // %e打印打印指数计数法的浮点数
    printf("a:%f;b:%e;c:%f;d:%f;e:%f \n", a, b, c, d, e);
    return 0;
}
