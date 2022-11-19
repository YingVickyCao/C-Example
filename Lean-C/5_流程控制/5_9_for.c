// For
#include <stdio.h>
//int main(int argc, const char *argv[]) {
int main_5_9(int argc, const char *argv[]) {
    
    {
        /**
         0
         1
         2
         */
        for(int i = 0; i< 3 ; i++){
            printf("%d\n",i);
        }
    }
    printf("\n");
    
    {
        /**
         0
         1
         2
         */
        int i = 0;
        while (i < 3) {
            printf("%d\n",i);
            i++;
        }
    }
    printf("\n");
    
    // 三个表达式都可以省略，但是分号不能省略。
    {
        /**
         0
         1
         2
         */
        int i = 0;
        for(;;){
            if(!(i< 3)){
                break;
            }
            printf("%d\n",i);
            i++;
        }
    }
    printf("\n");
    
    
    // 三个表达式其实任意的C语句都是可以的。
    {
        //死循环
//        for(printf("A\n");printf("B\n");printf("C\n")){
//            printf("D\n");
//        }
        
        /**
         哈哈
         哈哈
         哈哈
         */
        for(int i = 0,j = 0; i < 3; i++,j++){
            printf("哈哈\n");
        }
    }

    return 0;
}

/*
 1 for
 和while功能一模一样,完全等价
 
 2 语法
 for(初始化表达式; 循环条件表达式; 循环后操作表达式){
    循环体;
 }
 
 3 执行步骤
 第1步：先执行初始化表达式
 第2步：判断循环条件表达式的真假
 2.1 若为真，则执行循环体。循环体执行完毕后，再执行循环后操作表达式。然后跳回第2步继续执行。
 2.2 若为假，则结束for循环。
 
 4 注意
 （1）三个表达式都可以省略，但是分号不能省略。
     如果第二个表达式省略，那么循环条件默认是成立的。
 
 for(; ; ){
    循环体;
 }
 
 （2）三个表达式其实任意的C语句都是可以的。但是只能是3条语句。
 
     大部分情况下，for都是这样使用的：
     for(int i = 0; i< XXX ; i++){
     }
 
 5 如何选择for 和 while
 用for，一定能用while。
 用while，一定能用for。
 
 1）循环次数确定循环，一般用for。
 2）循环次数不确定的循环，但是确定循环继续或结束的条件。一般用while
 while(1) break
 for(;;;) break
 */
