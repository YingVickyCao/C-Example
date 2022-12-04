// int类型的修饰符
#include <stdio.h>

//int main(int argc, const char *argv[]) {
int main_3_8(int argc, const char *argv[]) {
    
    // 1 short int
    {
        short int num = 10;
        printf("%hd\n",num); // 10
        // Format specifies type 'int' but the argument has type 'unsigned long'
//        printf("%d\n",sizeof(num)); // 2
        printf("%lu\n",sizeof(num)); // 2

        // 简写
        short num2 = 5;
        printf("%hd\n",num2); // 5
    }
    
    // 2 long int
    {
        long int num = 20;
        printf("%lu\n",sizeof(num)); // 8
        printf("%ld\n",num); // 20

        // 简写
        long num2 = 3;
    }
    
    // 3 long long
    {
        long long int num = 20;
        printf("%lu\n",sizeof(num)); // 8
        printf("%lld\n",num); // 20
        
        
         //简写
        long long num2 = 3;
    }
    
    // 4 unsigned
    {
        int num = 2300000000;
        unsigned int num2 = 2300000000;
        printf("%d\n",num); // -1994967296
        printf("%u\n",num2); // 2300000000
        
        unsigned short num3 = 65535;
        printf("%hu\n",num3); // 65535
    }
    
    // 5 signed
    {
        signed int num = 10;
        signed int num2 = -1;
        int num3 = 10;
        int num4 = -1;
    }
    return 0;
}


/**
 1、int类型的变量在内存中占据4个字节。
(-2^31) ~ (2^ 31-1)
 
 存在的问题？
 一些超过int范围的正数无法存储。
 一些范围很小的数用int很浪费内存空间。
 
 2、int类型的修饰符
 1）、作用：指定int类型的变量在内存中占用的字节数
 
 2）、short修饰符
 声明1个int类型的变量时，用short修饰，表示只占 2个字节(16位)。
 
 short int num;
 
 最高位为符号位，15位表示数据。
 所以最小值是(-2^15=-32768）， 最大值是(2^15-1=-32767）
 
 输出short：%hd
 
 简写： short  num;
 
 
 3）、long修饰符
 声明1个int类型的变量时，用long修饰
 
 long int num = 10；
 在32位的操作系统下，被long修饰的整型变量占据4个字节。
 在64位的操作系统下，被long修饰的整型变量占据8个字节。
 
 OX和Iphone系统都是64位的。
 
 最高位为符号位，63位表示数据。
 所以最小值是(-2^63）， 最大值是(2^63-1）
 
 简写：long num = 10;
 
 4）long long 修饰符
 声明1个int类型的变量时，用long long修饰
 
 long long int num = 10；
 
 无论在32位和64位的操作系统下，被long修饰的整型变量占据8个字节。
 
 输出 long long ： %lld
 
 简写：long long num = 10;
 
 
3、unsigned 修饰符

 1）、上面的int、short int、long int、long long int 这些，都是 最高位是符号位，实际上表示的数据少了1位。
存储1个人的年龄
int, 4个字节，最高位是符号位，31位表示数据。
这时，最高位不表示符号位，而是参与数据表示。
这个时候有32位来表示数据。
最大值就翻了1倍，有32位表示数据。
但是最小值就成了0.
 
 2）、声明int变量的时候， 加1个unsigned
表示这个变量的最高位不表示符号位，而是表示数据。
 
 unsigned int num = 100;
 那么这个值最小值就成了0，因为没有正负。
 最大值比原来却翻了2倍。
 
 输出 unsigned int ：%u
 
 
 3）、其他的变量可以用unsigned吗？
 可以。
 
 输出：
 unsigned short ： %hu
 unsigned long ： %lu
 unsigned long long ： %llu
 
4、signed 修饰符
 表示这个变量的最高位表示符号位
 
 实际上默认就是这样的。
 singned写不写都是一样的。

 */
