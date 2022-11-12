#include <stdio.h>
//int main(int argc, const char *argv[]) {
int main_7_3(int argc, const char *argv[]) {
    {
        int num = 1;
        int result = ++num;
        printf("%d,%d\n",num,result);// 2,2
    }
    
    {
        int num = 1;
        int result = num++;
        printf("%d,%d\n",num,result);// 2,1
    }
    // Example
    {
        int i = 1;
        int j = 2;
        int k = (i++) + (++j) + (i++); // (1 + 3 + 2)
        printf("%d\n",k);// 6
    }
    
    // Example
    {
        int i = 1;
        int j = i++ + ++i + i++ + ++i+ i++; // 这种表达式，一般不用
        printf("%d\n",j);// 17
    }
    return 0;
}

/**
 自增自减运算
 
 1 自增运算符
 1) 前自增表达式
    int num = 1;
    ++num;
    计算方式：先将自身的值+1，然后再将自身的值取出来作为自增表达式的结果。
 2) 后自增表达式
    int num = 1;
    num++;
    计算方式：先将自身的值取出来作为自增表达式的结果，然后再将自身的值+1
 
 2 自增运算符的优先级 比 算术运算符的优先级高
 
 3 自减运算符
    类似
 */
