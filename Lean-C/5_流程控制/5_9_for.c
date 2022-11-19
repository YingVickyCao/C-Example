// For
#include <stdio.h>
int main(int argc, const char *argv[]) {
//int main_5_9(int argc, const char *argv[]) {
    
    {
        for(int i = 0; i< 3 ; i++){
            printf("%d\n",i);
        }
    }
    printf("\n");
    
    {
        int i = 0;
        while (i < 3) {
            printf("%d\n",i);
            i++;
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
 */
