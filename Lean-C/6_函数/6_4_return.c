// return

#include <stdio.h>


int getSum(int num1, int num2){
    return num1 + num2;
}

int isLeapYear(int year){
    if((year % 100 == 0)
       || (year % 4 == 0 && year % 100 != 0)){
        return 1;
    }
    else{
        // 5）一旦函数定了函数值，那么必须保证函数体每个分支结束之前都要有返回值。否则编译错误。
        // 6）return 关键字 - 在有返回值的函数中，必须在函数结束之前使用return返回一个数据。
        return 0;
    }
}

void printSum(){
    printf("sum is 20");
    // 6）return 关键字 - 在无返回值的函数中，只能直接 return;
    return;
    printf("sum is 20");
}
//int main(int argc, const char *argv[]) {
int main_6_4(int argc, const char *argv[]) {
    getSum(1,2);
    printf("%d\n",isLeapYear(405));
    printSum();
    return 0;
}

/*
 1、return
    在函数体中如果遇到了return关键字，就会理解结束这个函数的执行。

    函数的结束有两种方式：
    自然结束：当函数体执行完毕后，就会结束这个函数
    return：使用return关键字来提前结束函数
 
 2、调用者如何拿到函数返回的数据？
    声明1个和函数的返回值类型相同的变量来接收。
 
 3、注意：
    1）函数的返回值类型代表了什么？
    代表了函数执行完毕后，有1个这个类型的数据要返回给调用者。
    这个时候调用者才知道什么类型的变量来接收函数的返回值。
 
    2）void代表函数执行完毕之后，没有任何数据返回给调用者。
    这时调用者就不用任何变量来接收返回值了。
    
    3）一旦函数指定了返回值类型，就必须在函数结束之前返回这个类型的数据。
 
    4)如果函数有返回值，那么调用者可以接受也不可以不接受。
 
    5）一旦函数定了函数值，那么必须保证函数体每个分支结束之前都要有返回值。否则编译错误。
 
    6）return 关键字
    在无返回值的函数中，只能直接 return;
    
    在有返回值的函数中，必须在函数结束之前使用return返回一个数据。
    作用：
    立即结束函数的执行
    返回这个函数的执行结果。
 */
