#include <stdio.h>

//int main(int argc, const char *argv[]) {
int main_7_4(int argc, const char *argv[]) {
    int i = 0, j = 1, k=2;
    int result = (i+3,j+3, k+3, i+k);
    printf("%d\n",result);  // 2
    
    int result2 = (i++,j++, k++, i+j+k);
    printf("%d\n",result2);  // 6
    
    int result3 = (i++,(j++,k++), i+j+k);
    printf("%d\n",result3);  // 9
    return 0;
}


/**
 逗号运算符
 
 1 逗号在C中，也是1个运算符。
 
 2 逗号表达式
 由逗号连接起来的1个式子。
 用逗号将其他表达式连接起来，就叫逗号表达式。
 
 实际上很少使用。
 
 语法格式：
 表达式1,表达式2,...表达式n;
 
 执行步骤：
 从头到尾去执行每一个表达式。

 执行结果：
 最后一个表达式的结果，就是整个逗号表达式的结果。
 
 3 逗号表达式的目的，并不是想要前面表达式的结果，
 而只是想要前面的表达式执行。要最后1个表达式的结果。
 
 前面的表达式只是想要让其执行，不关心结果。因为前面的表达式一旦执行就会影响最后1个表达式的结果。
 关心的是，前面的变化完了后，最后1个表达式的结果是多少。
 */
