//  指针与指针之间的比较运算.c

#include <stdio.h>

//int main(int argc, const char *argv[]) {
int main_10_8(int argc, const char *argv[]) {
    {
        // 2、为变量分配字节空间时，从高地址向低地址分配。
        {
            int num1 = 10;
            int num2 = 20;
            
            // num1在高地址，num2在低地址
            int* p1 = &num1;
            int* p2 = &num2;
            
            int res = p2 > p1;  // p2的值是否大于p1的值
            printf("%d\n",res); // 0
        }
        
        // 3、使用==，!=, 来判断两个指针指向的地址是不是同一个地址
        {
            int num1 = 10;
            int num2 = 20;
            
            int* p1 = &num1;
            int* p2 = p1;
            int res = p2 == p1;
            printf("%d\n",res); // 1
        }
    }
    return 0;
}

/**
 1、指针与指针之间做比较运算
 >
 >=
 <
 <=
 ==
 !=
 
 2、为变量分配字节空间时，从高地址向低地址分配。
 >, >=, <,<=，可以判断两个指针指向的变量，谁在高地址，谁在低地址
 
 3、使用==，!=, 来判断两个指针指向的地址是不是同一个地址
 */
