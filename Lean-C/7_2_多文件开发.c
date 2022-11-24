// 多文件开发.c
#include <stdio.h>

// Way 1 : bad. 告诉编译器doSum在其他地方
int doSum(int num1, int num2);

// Way 2 : good. 声明头文件
#include "mymath.h"

//int main(int argc, const char *argv[]) {
int main_7_2(int argc, const char *argv[]) {
    printf("%d\n",doSum(1,3));
    return 0;
}

/**
 1、 1个C程序，如果所函数都写在main.c中？
    混乱，不方便管理
    不利于团队开发
 
 2、每1个人负责1个模块的开发
    程序是由1个1个模块组成的。
    模块就是1个小功能

    微信：
    扫一扫
    朋友圈

    不同的人负责不同的功能的开发。
    模块/功能.  函数.
    谁要使用这个功能，只需要直接调用就可以了。
 
 3、如何分模块开发？
    写1个程序.
    有1个模块：做数学运算

    1）、调用时，声明函数
    遇到的问题：
    写模块的人新增函数，如果要调用，需要先声明。
    写模块的人删除函数，还要修改函数的声明。
    写模块的人更新函数，还要修改函数的声明。

    2）、函数的声明和实现，应该让写模块的人来做。
    因为这些东西只有写模块的人清楚。

    所以，模块开发时，这样做：
    写模块的人提供2个文件。
    .c 源文件 - 函数实现
    .h 头文件 - 函数声明
    
    写模块的人要新增、删除或修改函数时，要把头文件也改掉。
    调用的人只要包含头文件就可以了。
 
    
 4、总结
    当程序的函数过多时，就要考虑分模块开发。
    如何分模块？
    1个模块至少包含2个文件：.c 源文件、.h 头文件
 */
