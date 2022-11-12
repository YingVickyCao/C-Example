#include <stdio.h>
//int main(int argc, const char *argv[]) {
int main_4_4_5(int argc, const char *argv[]) {
    // Warning : Relational comparison result unused
    10 > 20; // 比较表达式
    int result = 10 > 20;
    printf("%d\n",result);  // 0
    
    printf("%d\n",(10 < 20));  // 0
    printf("%d\n",(10 <= 20));  // 1
    printf("%d\n",(10 == 10));  // 1
    printf("%d\n",(10 != 20));  // 1
    
    //  4 常见的运用比较表达式的场景
    printf("%d\n",(10 != 20));  // 1
    
    int num1 = 10, num2 = 20;
    int result2 = num1 > num2;
    printf("%d\n",result2);  // 0
    
    printf("%d\n",(10 != num2));  // 1

    printf("%d\n",(num1+ num2 > 300));  // 0  先计算num1和num3的sum，再计算与300比较
    printf("%d\n",(num1+ num2 > num1-100));  // 1  先计算num1和num3的sum，再计算num1-100, 再左边vs右边
    
    // 5 char 数据也可以参与比较运算符
    char ch = 'a';
    printf("%d\n",(ch > 97));// 0
    
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
 
 4 常见的运用比较表达式的场景
    a) 比较运算符的两边，可以是常量、变量、表达式
    b) 判断1个表达式的结果，与 另外1个数据之间的关系。
     e.g., 判断num是否是5的倍数？
     int num = xx;
     num % 5 == 0
 5 char 数据也可以参与比较运算符
    那么比的是对应的ASCII码。
    
    e.g., 让用户输入2个字符，假设都是小写字母。怎么判断哪个在前面？
    char ch1, ch2;
    ch1 < ch2;
 */
