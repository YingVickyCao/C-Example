#include <stdio.h>
int main(int argc, const char *argv[]) {
    // Warning : Relational comparison result unused
    10 > 20; // 比较表达式
    int result = 10 > 20;
    printf("%d\n",result);  // 0
    
    printf("%d\n",(10 < 20));  // 0
    printf("%d\n",(10 <= 20));  // 1
    printf("%d\n",(10 == 10));  // 1
    printf("%d\n",(10 != 20));  // 1
    return 0;
}
/**
 1 比较运算符
     >
     >= : 大于或等于
     <
     <=: 小于或等于
     ==
     !=
 2 比较表达式
    由比较运算符连接起来的式子
 
 3 比较表达式的结果的类型
    1个比较表达式代表：1个条件。
    而1个条件的结果，也就是比较表达式的结果，要么成立（真），要么不成立（假）。
  
    在C中，用int类型的数据表示真假。
    0代表假
    非0代表真。
 
     所以，应该用int类型的变量来保存1个比较表达式的结果。
     如果，条件为真，那么结果为1
     如果，条件为假，那么结果为0
 */
