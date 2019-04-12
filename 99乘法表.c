#include <stdio.h>

/*
 输出99乘法表
*/

int main(){
  int i,j;
  for(i=1;i<10;i++){
    for(j=1;j<i+1;j++){
      printf("%d * %d = %d  ",j,i,i*j);
    }
    printf("\n");
  }
}