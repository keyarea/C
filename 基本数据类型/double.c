#include <stdio.h>

/*
  double类型，浮点型。
  默认情况下，编译器假定浮点型常量是double类型的精度。
*/
int main(int argc, char const *argv[])
{
    double a = 0.0;
    double b = 1.;
    double c = .09;
    double d = 3e-1;
    double f = .8e-2;

    // 打印浮点型
    // %f打印10进制计数法的浮点数
    // %e打印打印指数计数法的浮点数
    printf("a:%f;b:%f;c:%f;d:%f; \n", a, b, c, d);

    return 0;
}
