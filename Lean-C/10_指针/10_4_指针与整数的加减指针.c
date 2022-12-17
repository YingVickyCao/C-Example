//  指针与整数的加减指针.c
#include <stdio.h>

//int main(int argc, const char *argv[]) {
int main_10_4(int argc, const char *argv[]) {
    // 加法
    {
        // p + 1 => 地址 + 4
        {
            int num1 = 10;
            int num2 = 20;
            
            int* p1 = &num2;
            
            int* p2 = p1+1;
            printf("%p\n",p1);// 0x7ff7bfeff438
            printf("%p\n",p2);// 0x7ff7bfeff43c
            
            printf("%d\n",*p2);//1o
        }
        // p + 1 => 地址 + 8
        {
            double d1 = 12.5;
            double* p1 = &d1;
            double* p2 = p1 + 1;
            printf("%p\n",p1);// 0x7ff7bfeff420
            printf("%p\n",p2);// 0x7ff7bfeff428
        }
    }
    return 0;
}


/**
 
 1、指针和整数进行加减             => See Excel
    指针与整数进行加减。
    比如指针+1；
    并不是在指针地址的基础上进行加上一个字节的地址。而是在这个指针地址的基础上加上1个单位变量占用的字节数。
     
    如果指针的类型是int* ,那么这个时候1代表4个字节地址。
    如果指针的类型是float* ,那么这个时候1代表4个字节地址。
    如果指针的类型是double* ,那么这个时候1代表8个字节地址。
    如果指针的类型是char* ,那么这个时候1代表1个字节地址。
 
 */
