#include <stdio.h>
//int main(int argc, const char *argv[]) {
int main_4_4_6(int argc, const char *argv[]) {
    
    {
        // &&
        int num1 = 10;
        int num2 = 20;
        // Wrong:Expression result unused
        //    num1 > 0 && num2 > 0; // 逻辑表达式
        
        int result = num1 > 0 && num2 > 0;
        printf("%d\n",result);  // 1
        printf("%d\n",(-10 > 0 && 20 > 0));  // 0
        
        // && - 断路问题
        int i = 1;
        int result2 = i++ > 10 && ++i < 10; // 高且富且帅
        printf("%d,%d\n",result2,i);  // 0,2
        
        int j = 1;
        int result3 = j++ > 0 && ++j < 0;
        printf("%d,%d\n",result3,j);  // 0,3
    }
    
    // ||
    {
        int num1 = 10;
        int num2 = 20;
        int result = num1 > 0 || num2 > 100;
        printf("%d\n",result);  // 1
        
        printf("%d\n",(-10 > 0 || -20 > 0));  // 0
        
        // || - 断路问题
        int i = 1;
        int result2 = i++ > 0 || ++i < 10;  // 白或富或美
        printf("%d,%d\n",result2,i);  // 1,2
        
        int j = 1;
        int result3 = j++ > 5 || ++j < 0;
        printf("%d,%d\n",result3,j);  // 0,3
    }
    
    // !
    {
        int num = 10;
        int result = num > 0; // 1
        int result2 = !result; // 0
        printf("%d,%d\n",result,result2);
        
        int result3=!result2; // 1
        printf("%d\n",result3);
        
        int i = 10;
        // 取的是num的反
        printf("%d\n",!i > 0); // 0
    }
    
    //  7  逻辑运算符之间的优先级
    {
     
        int num1=10;
        int num2=20;
        printf("%d\n",(num1 > 10 || num2 < 50 && num2 > !num1)); // 1
        printf("%d\n",(num1 > 10 || (num2 < 50 && num2 > (!num1)))); // 1

    }
    return 0;
}

/**
 逻辑运算符
 && 逻辑与（并且）：所有条件为真，结果才为真
 ||     逻辑或（或者）：
 !      逻辑非（取反）
 
 1 比较表达式 ： 1 个表达式只能描述1个条件。
    当需要判断多个条件，比较表达式已经不满足了。
 
 2 逻辑运算符
    找男朋友： 高富帅，并且
    找女朋友：白富美，或者
 
    在代码世界也有同样的需求：判断多个条件并且指定多个条件之间的关系。
 3 逻辑表达式
     由逻辑运算符连接起来的式子。
     一般：逻辑运算符连接起来的是两个条件（比较表达式）
     
     逻辑表达式的结果：
     因为逻辑表达式描述的是多个条件，也是条件，那么结果要么成立，要么不成立。
     所以，逻辑表达式的结果，仍然是真假。
     所以，用int类型的变量来保存逻辑表达式的结果。
     0代表假
     非0代表真。
     
     逻辑表达式 与 比较表达式的区别：
     比较表达式只能描述1个条件。
     逻辑表达式可以描述多个条件，且使用逻辑运算符来指定多个条件之间的关系。
 
 4  &&
     1 && 1 -> 1
     0 && 1 -> 0
     1 && 0 -> 0
     0 && 0 -> 0
 
    断路问题 :
    左 && 右。 当表达式的左的条件为假，结果为假，那么右边的条件不会被执行。
 
 5 ||
     1 || 1 -> 1
     0 || 1 -> 1
     1 || 0 -> 1
     0 || 0 -> 0
 
     断路问题 :
     左 || 右。 当表达式的左的条件为真，结果为真，那么右边的条件不会被执行。
 
 6 !
    作用：将真变为假，将假变为真
    取反运算符的优先级，比 比较运算符的优先级高。
 
 7  逻辑运算符之间的优先级
    not  and or
    !    >   &&  >  ||
 
    当不确定优先级的时候，使用（）改变优先级。
 */
