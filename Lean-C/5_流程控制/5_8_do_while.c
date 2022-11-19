// do while
#include <stdio.h>
//int main(int argc, const char *argv[]) {
int main_5_8(int argc, const char *argv[]) {
    {
        /**
         1
         2
         */
        int i = 1;
        do {// 循环继续的条件
            printf("%d\n",i);
            i++;
        }while(i < 3);
        
    }
    printf("\n");
    
    // 循环体至少执行1次
    {
        /**
            3
         */
        int i = 3;
        do {// 循环继续的条件
            printf("%d\n",i);
            i++;
        }while(i < 3);
        
    }
    return 0;
}


/**
 
 1 do-while
 
 1） 语法：
     do {
     循环体
     }while(条件表达式);
 2） 执行步骤
 
 第1步：先执行1次循环体
 第2步：判断条件表达式的真假
 2.1 若为真，则执行循环体。循环体执行完毕之后，跳回第2步继续执行。
 2.2 若为假，结束循环结构。
 
 3) do-while 特点：循环体至少执行1次
 
 2 while vs do-while
 不同点：
 1）do-while 先执行，再判断。
   while 先判断再执行。
 2）当第1次判断循环条件不成立时，
    do-while 会执行1 次。
    while 1次也不会执行。
 
 3 什么时候用while，什么时候用do-while？
 （1）当循环体至少执行1次时，用do-while
 （2）当循环可能1次也不会执行时，用while。
 
 实际开发中，do-while比较少用。
 因为循环无论如何至少执行1次，用while也能搞定。
 while(1){
    break;
 }
 */
