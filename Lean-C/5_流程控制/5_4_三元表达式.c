
//  5_4_三元表达式.c
#include <stdio.h>

//int main(int argc, const char *argv[]) {
int main_5_4(int argc, const char *argv[]) {
   int i = 1;
   int result = i > 0 ? 100 : 200;
   printf("%d\n", result);// 100
    
    int j = i>0?printf("哈哈哈\n"):printf("Hi\n");
    printf("%d\n", j);// 10,打印占多少个字节。
   return 0;
}

/**
1 运算符
根据参与的操作数的个数，将运算符分为几类：

单目运算符/一元运算符：操作数有1个。
++
--

双目运算符/双元运算符：操作数有2个。
e.g., +

三目运算符/三元运算符：操作数有3个。
 三元表达式
 条件表达式？值1:值2;

 2 三元表达式，可以部分代替if-else，更为简洁。
*/
