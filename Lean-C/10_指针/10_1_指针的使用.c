//  指针的使用.c

#include <stdio.h>

//int main(int argc, const char *argv[]) {
int main_10_1(int argc, const char *argv[]) {
    // 4、指针变量的初始化
    {
        // ok
        {
            int num = 10;
            printf("%p\n", &num); // 0x7ff7bfeff43c
           
            int *p = &num;
            
            // 指针变量的值
            // 说明指针变量中存储的值，确实是一个变量的地址。
            printf("%p\n",p);     // 0x7ff7bfeff43c
            
            // 指针变量的地址
            // 指针变量它自己的地址
            printf("%p\n",&p);     // 0x7ff7bfeff430
        }
        // wrong usage
        {
            // Error:Compile Error : Cannot take the address of an rvalue of type 'int'
//            int *p = &100;
        }
        // wrong usage
        {
            // Warning : Incompatible integer to pointer conversion initializing 'int *' with an expression of type 'int'
            int *p = 100; // error
        }
        // wrong usage
        {
            float f = 12.12f;
            // Warning:Incompatible pointer types initializing 'int *' with an expression of type 'float *'
            int* p = &f;
        }
    }
    
    // 5、指针变量的使用
    {
        
        int num = 10;
        int *p = &num;
        
        // *p 代表p指向的变量,代表给num赋值
        *p = 100;
        printf("%d\n",num); // 100
        printf("%d\n",*p);  // 100，输出指针指向的变量的值。
        
        // 指针指向的变量赋值，遵循自动类型转换规则
        *p = 12.5;
        printf("%d\n",num); // 12
        printf("%d\n",*p);  // 12
    }
    
    // 6、使用指针变量时，要注意：
    {
        // 批量声明指针变量
        {
            {
                int* p1, p2,p3;     // wrong。只有p1是指针类型
            }
            {
                int *p1, *p2,*p3;     // ok
            }
        }
        // 野指针
        {
            int *p;
            // Warning:Variable 'p' is uninitialized when used here
            printf("%d\n",*p);  // 12
        }
        
        // NULL值
        {
            // NULL表示谁都不值
            int *p = NULL;
            printf("%d\n",NULL);    // 0
//            printf("%d\n",*p);    // Error : Thread 1: EXC_BAD_ACCESS (code=1, address=0x0)
        }
        
        // 多个指针指向1个变量
        {
            int num = 10;
            int *p1 = &num;
            int *p2 = p1;
            
            *p1 = 100;
            printf("%d\n",num); // 100
            printf("%d\n",*p1); // 100
            printf("%d\n",*p2); // 100
        }
    }    
    return 0;
}

/**
 1、指针是C的灵魂。

 2、什么是指针？变量的地址就叫做指针。指针就是地址，地址就是指针。
 
 3、指针变量
    1）、指针变量，首先是1个变量。
    指针变量，是存储地址的变量。专门用来存储另外一个变量的地址。
    指针变量指向了另外一个变量。
 
    2）、好处：
    访问变量的方式：    => See Excel
    a、直接访问
       int num = 10；
       num = 20；
 
    b、间接访问
      通过指针变量找到指向的变量，然后通过指针变量间接地访问这个变量。
 
    3）、如何声明1个指针变量？
    a、语法
       数据类型*  指针变量名称；
    
       int* p;
       声明了1个指针变量，名称是p；类型是int*
       *代表这个变量不是1个普通变量，而是1个专门用来存储地址的指针变量。
       这个p只能存储地址。
 
       指针的类型：有哪些普通的类型，就有哪些指针的类型
       int*  p;
       double* p;
       float* p;
       char* p;
 
    b、声明的时候，注意*的位置
       int* p; (Recommended,因为更清楚地表明这是一个指针变量)
       int * p;
       int *p;
 
    c、一个指针变量并不是可以存储任意类型的变量的地址，而是有限定的。
    只能存储和这个指针类型相同的普通变量的地址。
    int* p;         // 只能存储int变量的地址
    double* p;  // 只能存储double变量的地址
    float* p;      // 只能存储float变量的地址
    char* p;       // 只能存储char变量的地址
 
    否则，会出现一些乱七八糟的问题。
 
 4、指针变量的初始化
    1）、指针变量是存储另外1个变量的地址。
        所以，不能赋值一个非地址类型的常量数据。
        所以，不能直接赋值1个变量给指针。
    2）、指针变量存储另外1个变量的地址时，这个变量的类型是限定的。
 
    3）、正确的做法：
        a、& 取地址运算符，取出变量的地址，用%p打印该地址
        b、将取出的地址，赋值给指针变量
           int num = 10;
           int* p = &num;
           p指针的值就是num变量的地址。
           p指向了num变量。
 
     4）、指针变量只能存储和指针变量类型相同的普通变量的地址。否则会出问题。
        轻则提示编译警告，重则其他问题。
 
     5）、指针变量也是1个变量，那么在内存中也有1个地址。
        用&取出指针变量的地址。
    
        int* p;
        p  ： 操作的是p这个指针变量，可以取出p的值，也可以为p赋值。 => 指针变量的值
        &p ：拿到p的地址。 => 指针变量的地址
 
 5、指针变量的使用
    2）、pointer，好的做法：声明指针变量时以p开头。
 
    3）、使用指针间接操作指向的变量
    格式：*指针变量名 ： 代表这个指针指向的变量。
 
     int num = 10;
     int *p = &num;
     *p 代表p指向的变量，也就是num。即：*p 完全等价于num
     *p = 100
 
     *指针变量名：表达式的结果为指针指向的变量。拿到了指针指向的变量，就能为指针指向的变量的赋值或取值。
 
     4）、注意：
     *指针变量，完全代表指针指向的变量。
     因此，当通过这种方式，为指针指向的变量赋值时，如果数据类型不同，会做自动类型转换。
 
 6、使用指针变量时，要注意：
    1）、批量声明指针变量
        int* p1, p2,p3;     // wrong。只有p1是指针类型
        int *p1, *p2,*p3;     // ok
 
    2）、野指针
         声明1个指针变量，如果没有初始化.    => 野指针
         此时，这个指针变量，它是有值的，是垃圾值，随机数。
         这个指针可能指向1块随机的空间。
         
         这块空间：
         有可能无人使用。       => 运行不报错，但编译提示warning
         有可能别的程序在用。=>如果该值成功，可能程序崩溃
         有可能系统在用。       =>如果该值成功，可能系统崩溃
     
         这个时候，去访问（get和set）的指针指向的变量的时候，编译器提示Warning，或 程序运行有可能报错，XCode中Bad_ACCESS 错误。
         像这样的指针，叫做野指针
     
         有的时候，野指针访问的是有人在用的这块空间，但也不报错，这取决于内存保护机制到底有多强。
 
         如果只是取值还好，赋值非常危险，可能造成程序崩溃。
         原理：游戏-修改器
              找到这个值的内存空间。
 
         所以，声明指针变量时要初始化。
 
    3）、NULL值
        初始化指针变量时，如果还没有变量，可以初始化为NULL。
         
        NULL 值 代表指针变量不指向内存中的任何地址，谁都不值。
        NULL值 完全等价于 0.
         
        指针变量的值是NULL时，这时，通过指针变量去访问指向的变量时，100%报错。
 
 
    4）、多个指针指向1个变量
        int num = 10;
        int *p1 = &num;
        int *p2 = p1;
 
        p1和p2指针都访问了num变量，*p1 和 *p2 都是访问num的变量。
 *
 */
