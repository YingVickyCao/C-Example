#include "stdio.h"

void set_int_value();
void set_float_value();
void set_double_value();
void set_char_value();

int main(int argc, const char* argv[]){
    printf("Hello World\n");
//    set_int_value();
//    set_float_value();
//    set_double_value();
    set_char_value();
    return 0;
}

/**
 为int 赋值
 因为变量的类型是int，所以为int 赋值时，赋值的数据不能超过指定的范围

 a) 如果给定的数据太大，直接语法
 b) 如果为int 赋值1个小数，只会存储1个小数的整数部分。不会四舍五入。
 c) 如果给的数据超出范围并不多，虽然能运行，但是存储的是随机值（暂且这么认为）
 
 */
void set_int_value(){
    int num;
    num = 10;
    printf("%d\n",num); // 10
    
    // Compile error : Integer literal is too large to be represented in any integer type
//    num = 100000000000000000000000;
    
    num = 9.566;
    printf("%d\n",num); // 9
    
    // Warning : Implicit conversion from 'long' to 'int' changes value from 2200000000 to -2094967296
    num = 2200000000;
    printf("%d\n",num); // -2094967296
}

/**
 为float 赋值
 
 (1)浮点字面值默认是double类型
 (2)为float变量赋值的时候，赋值的小数后要加f
 (3)float只能保存精确保存有效位数不超过 7 位的小数。
 如果赋值的有效位数超过了 7 位，那么超出的部分不会精确保存。
 
 */
void set_float_value(){
    float f1;
    // 浮点字面值默认是double类型, 内存占据8个字节。虽然运行时的值是正确的，那么是12.12并没有超出float的范围。
    f1 = 12.12; // Depressed
    printf("%f\n",f1);
    
    // f表示12.12 是float 类型，内存占据4个字节
    f1 = 12.12f; // Recommended
    printf("%f\n",f1);
    
    // 只能精确保存12.12345（除了.,共7位），超出的部分，不能精确保存。打印出的最后7，刚好凑齐而已。
    f1 = 12.123456789f; // 12.123457
    printf("%f\n",f1);
}

/**
 为double 赋值
 
 double只能保存精确保存有效位数不超过16位的小数。
 如果赋值的有效位数超过了16位，那么超出的部分不会精确保存。
 */
void set_double_value(){
    double d;
    d = 12.12;
}

/**
 为char赋值

 (1)char 只能存储单个字符。
 (2)如果给的值太多，只能保存最后一个。
 (3)空格也是1个字符，所以，可以存储1个空格。
 (4) char 变量中无法存储中文。因为在C中。1个中文字符占三个字节。而1个char变量占一个字节。
 
 */
void set_char_value(){
    char ch;
    ch = 'a';
    printf("%c\n",ch);

    // Warning : Implicit conversion from 'int' to 'char' changes value from 1633837924 to 100
    ch = 'abcd';    // d
    printf("%c\n",ch);
    
    ch = ' ';    // 空格
    printf("%c\n",ch);
}
