// Switch
#include <stdio.h>

int main(int argc, const char *argv[]) {
    // switch后面的（）可以是表达式
    {
        int num = 10;
        switch(num + num){
            case 10:
                printf("10\n");
                break;
            case 20:
                printf("20\n"); // invoked
                break;
            case 30:
                printf("30\n");
                break;
            default:
                printf("Other value\n");
                break;
        }
    }
    
    // switch后面的（）可以是变量
    {
        switch(10){
            case 10:
                printf("10\n"); // invoked
                break;
            case 20:
                printf("20\n");
                break;
            case 30:
                printf("30\n");
                break;
            default:
                printf("Other value\n");
        }
    }
    
    // switch后面的（）可以是常量
    {
        int num = 10;
        switch(num){
            case 10:
                printf("10\n"); // invoked
                break;
            case 20:
                printf("20\n");
                break;
            case 30:
                printf("30\n");
                break;
            default:
                printf("Other value\n");
        }
    }
    // case穿透
    {
        printf("case穿透---->\n");
        /**
         10
         20
         30
         */
        int num = 20;
        switch(num){
            case 10:
                printf("10\n");
                break;
                
            case 20:
                printf("20\n");
                
            case 30:
                printf("30\n");
                break;
                
            default:
                printf("Other value\n");
        }
        printf("case穿透----<\n");
    }
    
    {
        printf("case穿透---->\n");
        /**
         春天
         */
        int month = 2;
        switch(month){
            case 1:
            case 2:
            case 3:
                printf("春天\n");
                break;
                
                
            default:
                printf("不是春天\n");
        }
        printf("case穿透----<\n");
    }
    
    // switch后面的表达式的结果不能是小数
    {
        // ERROR: Complie error - Statement requires expression of integer type ('double' invalid)
        //         switch(1.1+1.1){
        //            case 1:
        //                break;
        //
        //
        //            default:
        //                printf("Default\n");
        //        }
    }
    
    
    // switch vs IF
    {
        int score = 60;
        if(score >= 60){ // 真
            printf("及格\n");
        }else{// 假,否则
            printf("不及格\n");
        }
        
//        switch(score){
//                // ERROR : Compile error - Expression is not an integer constant expression
//            case score >= 60:
//                printf("及格\n");
//                break;
//            case score < 60:
//                printf("不及格\n");
//                break;
//        }
    }
    
    return 0;
}

/**
1语法
     switch（表达式）
     {
        case value1:
         执行代码;
         break;
        case value2:
         执行代码;
         break;
        default;
            执行代码;
            break;
     }
     
     注意：switch后面的表达式没有说是必须是1个条件表达式。
 
 2 执行步骤
    a) 先计算switch后面的表达式的结果。
    b) 从上到下将这个结果和每个case后面的值进行相等比较判断。
    c) 只要有1个相等，那么执行对应的代码。执行完毕后，就结束整个switch结构。
    d) 如果不相等，再判断下一个case的值。
    e) 如果所有case后面的值和表达式的结果都不相等，就执行default中的代码。
 
 3 使用注意
     1）switch后面的（）可以是表达式、变量、常量
     2）case穿透
     1个case后面的break在语法上是可以不写的。
     break的意思：代表立即结束整个switch结构。
     
     如果case的代码块没有break，那么就会直接穿透到下一个case中执行代码。
     遇到break才结束整个switch结构。或者 执行完。
     
     所以，一般情况下，我们不希望穿透到1个case中执行代码。那个case后面都要加1个break。
     
     如果多个case块的处理逻辑是一样，那么，使用case穿来简写代码。
     
     3) switch后面的表达式任何类型都是可以的。除了浮点数
     switch后面的表达式的结果除了小数，其他都是可以的。小数就报错。
     因为小数是近似数，并不是精确的，没法和case 后面的条件比较。
     
     4) case块可以加{}。但是一般都不加。
     
     5) case块可以写任意代码，只要符合你的逻辑。
     如果case块中要声明变量，那么这个case块就必须使用{}
     
     6) case块可以有任意个，根据逻辑来。defaut可以省略。
     defaut省略了，就没有默认执行代码了。
 
 4 switch vs IF
    1）if 能写，switch不一定可以使用。但是switch可以的，if一定可以。
     switch只能做等值判断，不能直接做范围判断，并且后面的数据不能有变量。
     if既可以等值判断，也直接做范围判断
 
    2）选哪个？
     等值判断，用switch更好。
     范围判断，采用if
 */
