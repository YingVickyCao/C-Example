#include <stdio.h>
//int main(int argc, const char *argv[]) {
int main_assigning_operator(int argc, const char *argv[]) {
    {
        // 赋值运算符
        int num = 10;
        num = num + 2;
        printf("%d\n", num); // 12
    }
    // 等价于
    {
        // 复合赋值运算符
        int num = 10;
        num += 2; // 先变量自身加2，再赋值给变量自身
        printf("%d\n", num); // 12
    }
    
    {
        // 复合赋值运算符
        int num = 10;
        num %= 2;
        printf("%d\n", num); // 0
    }
    return 0;
}

/**
 1 赋值运算符
 =
 
 2 复合赋值运算符
 +=
 -=
 *=
 /=
 %=
 
 */
