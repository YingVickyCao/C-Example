// char变量的深入
#include <stdio.h>

//int main(int argc, const char *argv[]) {
int main_8_7(int argc, const char *argv[]) {
    
    // 1 char变量是有符号的。
    {
        {
            // Implicit conversion from 'int' to 'char' changes value from 255 to -1
            char ch = 255;
            printf("%d\n",ch); // -1
        }
        {
                char ch = 97;
                printf("%d\n",ch); // 97
        }
        {
            char ch = 200;
            printf("%d\n",ch); // -56
        }
    }

    
    return 0;
}

/**
1、任何数据都是在内存中以二进制的补码形式存储的。
 
 char 变量如何存储？
 
 2、字符数据在内存中是如何存储的？
 字节数据在内存中存储的是这个字符所对应的ASCII码的二进制补码。
 
 char ch  = 'a';
 存储的是'a'的ASCII码 97 的二进制补码。
 
 3、所以，可以直接位char变量赋值一个整数。
 因为char变量中本来存储的就是1个整数。
 
 4、char变量是有符号的，最高位表示符号位。
 
 5、%c读取的时候，
 先从变量中读取存储在变量中的整数。
 然后从ASCII码表中取查找这个整数对应的字符。
 再显示这个字符。
 
 */
