#include <stdio.h> // 包含另一个文件 
// #include 指令和头文件

int main(void) // main()是一个函数名,int表明main()函数返回的是一个整数，void表明main()不带任何参数
{   // 函数体开始
    /*
      多行注释
    */

   // 声明
   // 该声明表示，将使用一个名为num的变量，而且num是int（整型）类型；
   int num; 

   // 赋值表达式 
   // 把值1赋给名为num的变量
   num = 1;
   
   // 调用一个函数
   // 该语句使用了printf()函数，在屏幕上显示. \n 告诉计算机另起一行,即把光标移至下一行啊
   printf("hello \n");

   // 调用printf()函数，把num的值内嵌在用双引号括起来的内容中一并打印。
   // %d 告诉计算机以何种形式输出num的值，打印在何处。
   printf("num is: %d \n", num);

   // return 语句
   // C函数可以给调用方提供（或返回）一个数。目前，可暂时把该行看做是结束main()函数的要求。
   return 0;

} // 结束