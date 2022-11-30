// 内存的构造和变量所占用的字节数
#include <stdio.h>

//int main(int argc, const char *argv[]) {
int main_8_1(int argc, const char *argv[]) {
    
    printf("%ld\n",sizeof(char));    // 1
    printf("%ld\n",sizeof('a'));    // 4，因为'a'的ASCII码是97
    char ch = 'a';
    printf("%ld\n",sizeof(ch));    // 1
    
    printf("%ld\n",sizeof(int)); // 4
    printf("%ld\n",sizeof(400)); // 4

    printf("%ld\n",sizeof(float));   // 4
    printf("%ld\n",sizeof(12.12f));  // 4

    printf("%ld\n",sizeof(double));  // 8
    printf("%ld\n",sizeof(12.12));  // 8
    
    // 简写
    printf("%ld\n",sizeof 12.12);  // 8
    return 0;
}

/**
 1 内存中的数据存储单元是有1个1个的二进制组成的。
    每1个二进制只能存储0或1。

    如果我们使用1个二进制来存储数据的话，这样的话，每1个二进制只能表示2个数据。
    科学家为了更方便地存储更多的数据，将每个8个二进制位分为1组，叫做1个字节。作为存储数据的最小单位。


    如果要往内存中存储数据的话，就至少使用1个字节，也就是8个二进制位。
    这时，1个字节可以最多表示(2^ 8=256)种数据，那么使用字节来存储数据的话，存储的数据就会多一些了。

    重点：
    内存的存储单元是由1个1个二进制位组成，每个二进制位只能存储0或1.
    将8个

    二进制位分成1组，作为存储数据的最小基本单位。

     单位换算：
     8bit = 1个字节，byte。
     1024字节 = 1KB
     1024KB = 1MB
     1024MB = 1GB
     1024GB = 1TB
     
     8G = 8 * 1024 * 1024 * 1024 *  8 bit
 
 3、我们在声明变量的时候，并不是去开辟1块空间。
     而是向系统在内存中申请1指定字节数的连续的字节空间。
     
     char       1字节 * 8 = 8位
     int           4字节 * 8 = 24位
     float        4字节* 8 = 32位
     double    8字节 * 8 = 64位
 
 4、sizeof 运算符
     计算变量、常量在当前系统和当前编译器上内存中占用的字节数
 1）、使用方法：
    sizeof(数据类型)   返回这个数据类型的变量在内存中占据多少字节
    sizeof(变量名) 返回这个变量在内存中占据多少字节
    sizeof(常量) 返回这个常量在内存中占据多少字节
     
     注意：
     12.12f是float，在内存中占据4个字节。
     12.12是double，在内存中占据8个字节。
     
     char的变量，在内存中占据1个字节
     char的常量，在内存中占据4个字节

  2）、使用简写方法
     使用sizeof时，某些情况可以省略（）。
     
     ok:
     sizeof 变量
     sizeof 常量
     
     not ok:
     sizeof 数据类型
 
 5、变量在内存中占据的字节数，会因为系统版本、编译器的不同而不同。
    使用sizeof查看
 */
