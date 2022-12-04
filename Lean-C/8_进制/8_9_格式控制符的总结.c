// 格式控制符的总结

#include <stdio.h>

//int main(int argc, const char *argv[]) {
int main_8_9(int argc, const char *argv[]) {
    
    {
        int num = 10;
        printf("%d\n",num);
    }
    {
        int num = -16711839;
        printf("%c\n",num); // a
    }
    
    return 0;
}

/**
 1、prinf函数中的占位符（/格式控制符）
 格式控制符的作用：
 1）、不同类型的数据在变量中存储的形式是不一样的。
 所以，在读取变量中的数据的时候，类型不同读取的方式也不同。 见Excel
 
 为了保证可以正确读出存储在变量中的数据，应该正确使用正确的格式控制符。
 
 int num = -16711839; 见Excel
 %c ?
 
 %c：从给定的变量的地址开始只读1个字节。
 然后将这个字节的整数读出来。
 然后以其ASCII码还原为字符。
 
 %d: 从给定的变量的地址开始连续读4个字节。
 
 %f：从给定的变量的地址开始连续读4个字节。前2个字节是整数部分。后两个字节是小数部分
 
  变量中的数据如何存储，那么就该如何读取，这样才能拿到正确的数据。
 
 2、格式控制符的总结
 
 int 整型
 %d     读取int整型的数据。以十进制的形式输出。
 %o     读取int整型的数据。以八进制的形式输出。
 %x     读取int整型的数据。以十六进制的形式输出。
 
 %hd  short
 %ld   long
 %lld   long long
 
 %u     unsigned int
 %hu   unsigned short
 %lu     unsigned long
 %llu     unsigned long long
 

 实型:
 float           %f
 double        %lf
 
 字符型:
 char           %c
 
 
 地址:
 %p
 
 */
