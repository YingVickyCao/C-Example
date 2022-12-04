//
//  8_6.c
//  Lean-C
//
//  Created by hades on 2022/12/3.
//

#include <stdio.h>

int main(int argc, const char *argv[]) {
//int main_8_6(int argc, const char *argv[]) {
    
    
    
    return 0;
}

/**
 1、不同类型的变量在内存中占据不同的字节数
 int           4
 float        4
 double    8
 char        1
 
 2、变量占用的字节空间一定是连续的。
 内存中存储数据的最小基本单元是字节。
 每个字节都有1个独一无二的地址，是1个十六进制的数。=> 因为十六进制表示更短。
 
 相邻的字节的地址的一定是连续的。
 0x11901
 0x11902
 0x11903
 ......
 
 声明1个变量，就是在内存中分配连续的指定字节数的空间。
 int 是4个连续的字节。
 int num = 10；
 1）、在为变量分配字节空间的时候，是从高地址到低地址分配的。分配连续的指定字节数的空间。
 
 int num = 10；
 int age = 5；
 
 2）、存储在变量中的数据是以数据的二进制补码形式存储进去的。
 10的补码
 00000000  00000000  00000000  00001010
 
 存储的时候，低位存储在低字节，高位存储在高字节。
 5的补码
 00000000  00000000  00000000  00000101
 
 3、
 */
