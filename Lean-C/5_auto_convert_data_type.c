
#include <stdio.h>

void auto_type_convert();

//int main(int argc, const char* argv[]){
int main_mark(int argc, const char* argv[]){
    auto_type_convert();
    return 0;
}


/**
 数据转换类型
 1 为变量赋值时，赋值的数据的数据类型，必须和变量的类型时一致的，否则就会出问题.
 为变量赋值时，赋值的数据的数据类型，和变量的类型不一致，这时C系统会将赋值的数据的类型 转换为 变量的类型，然后再赋值。
 这种情况叫做自动类型转换。
 
 有类型转换，C系统会多做一件事情
 
 2 变量是int
 （1）如果赋值的数据超出了int的范围，这时C系统会将数据转换为1个随机的int数据。
 （2）如果赋值的数据超出了int的范围太多，自动类型转换转不了，编译器直接报语法错误。
 （3）如果赋值的数据是1个浮点数，这时C系统会直接截取整数部分。
 
 3 变量是float类型
 (1)若赋值的数据是1个double类型，这时C系统将这个double类型的小数转换为float
 (1)若赋值的数据是1个int类型，这时C系统将这个int类型的小数转换为float
 
 4 变量是double类型
 (1)若赋值的数据是1个float类型，这时C系统将这个float类型的小数转换为double
 (1)若赋值的数据是1个int类型，这时C系统将这个int类型的小数转换为double
 
 4 变量是char类型
 ASCII码： 每个字符数据都有一个与之对应的整数，这个整数就叫做ASCII码
 不需要记忆，只需要记住3个
 `0` 49
 `A` 65
 `a` 97
 其他ASCII码都可以推出来，有规律。
 
 为char变量赋值的时候，可以直接赋值ASCII码。
 为char变量赋值一个整数时，实际上赋值的是以这个整数为ASCII码所对应的字符数据。
 */
void auto_type_convert(){
    // int
    int num = 22000000000;
    printf("%d\n",num); // 525163520
    
    // Error: compile error, integer literal is too large to be represented in any integer type
//    int num2 = 1122487898445564544211000400000000;
//    printf("%d\n",num2); // 12
    
    int num3 = 12.123;
    printf("%d\n",num3); // 12
    
    
    // float
    float f1 = 12.12; // double -> int
    float f2 = 12.12f; // 没有类型转换
    float f3 = 12; // int -> float
    
    // double
    double d1 = 12.12; // 没有类型转换
    double d2 = 12.12f; // float -> double
    double d3 = 12; // int -> double
    
    // char
    char ch1 = '0';
    char ch2 = 65;
    printf("%c\n",ch2); // A
    char ch3 = 'A';
    printf("%c\n",ch3); // A
    
    char ch4 = 65.9;
    printf("%c\n",ch4); // A
}

