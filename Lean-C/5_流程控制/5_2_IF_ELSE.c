/**
 If else
 
 语法结构：
 if(条件表达式){
    执行代码;
 }
 else{
    执行代码;
 }
 
 注意：If 和 else 必须执行一个，也不会都执行。
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    int score = 60;
    
    // bad : 条件要判断两次
    if(score >= 60){
        printf("及格\n");
    }
    if(score < 60){
        printf("不及格\n");
    }
    
    // Good
    if(score >= 60){ // 真
        printf("及格\n");
    }else{// 假,否则
        printf("不及格\n");
    }
    
    return 0;
}

