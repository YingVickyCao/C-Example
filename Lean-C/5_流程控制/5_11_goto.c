// goto
#include <stdio.h>
#include <stdlib.h>

//int main(int argc, const char *argv[]) {
int main_5_11(int argc, const char *argv[]) {
    
    /**
     generate a random 7
     generate a random 2
     generate a random 4
     Find 了 4的倍数：4
     */
    int num = -1;
loop:
    // 定义标签名的下面那一行的代码不能是声明变量。
    // 如果非要这么做，可以写一行没有用的代码。
    // ERROR: Complile error - Expected expression
//    int num = -1;
    
//    ;
//    int num = -1;
    
    num = arc4random_uniform(10); // 0~9;
    printf("generate a random %d\n",num);
    if(num % 4 != 0){
        goto loop;
    }
    printf("Find 了 4的倍数：%d\n",num);
    
    return 0;
}

/**
 goto

 1 语法：

     标签名:
     
     goto 标签名;
 
2 执行原理：
    当执行到goto语句时，CPU跳到指定的标签的地方，继续执行。
 
3 goto语句也可以实现循环
 1）注意不要造成死循环
 2）不建议经常使用goto，因为它不安全，容易造成死循环。
 除非你特别确定的情况下不会有死循环，那么就可以使用goto。
 3) 经常用于从内层循环直接跳出最外层循环。
 
 4 注意
 1）标签名随意，但要符合标识符的命名规则以及规范。
 标识符：程序员可以取名字的东西。
        变量、标签名、函数
 2） goto 可以往前跳，也可以往后跳。
 3）只能在当前函数当中跳。
 4）定义标签名的下面那一行的代码不能是声明变量。
 如果非要这么做，可以写一行没有用的代码。

 */
