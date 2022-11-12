#include <stdio.h>
//int main(int argc, const char *argv[]) {
int main_4_4_1(int argc, const char *argv[]) {
    // 2 算术表达式
    //表达式的顺序：先声明int类型的变量sum，然后计算10+10的结果，最后把这个表达式的结果赋值给sum变量。
    int sum = 10 + 20;
    printf("%d\n",sum);             // ok
    
    // 操作数的类型
    int num1=10;
    int num2=20;
    int sum2 = num1 + num2;         // ok
    printf("%d\n",sum2);
    
    float sum3 = 12.12 + 12.34;     // wrong
    printf("%f\n",sum3); // 24.459999
    
    double sum4 = 12.12 + 12.34;    // ok
    printf("%lf\n",sum4); // 24.460000
    
    int num3 = 10;
    double d = 12.12;
    double sum5 =  num3 + d;        // ok
    printf("%lf\n",sum5); // 22.120000
    
    double sum6 = 12.12 + 12.12f;     // ok
    printf("%lf\n",sum6); // 24.240000
    
    double sum7 = 10 + 1.1 + 1.1f;     // ok
    printf("%lf\n",sum7); // 12.200000
    
    // 除法
    printf("%d\n",(10/4)); // 2
    // 如何让结果带小数点？
    // 方法1:让任意其中一个变为double
    printf("%lf\n",(((double)10)/4)); // 2.500000
    // 方法2:让第一个整数*1.0
    printf("%lf\n",(10 * 1.0 /4));    // 2.500000
    printf("%lf\n",(10 /4 * 1.0));    // 2.000000   // wrong
    
    // 求余数
    printf("%d\n",(10 % 3));    // 1
    printf("%d\n",(10 % 5));    // 0
    // Error: Compile error : Invalid operands to binary expression ('double' and 'double')
//    printf("%d\n",(12.3 % 3.4));    // 0
    
    // 3 课堂练习
    // 1) 声明2个变量保存衣服的单价和裤子的单价
    double priceOfCloth = 120.88;
    double priceOfTrouser =89.9;
    // 2) 声明2个变量保存衣服和裤子的数量
    int countOfCloth=0;
    int countOfTrouser=0;
    // 3) 让用户输入裤子和衣服的数量
    printf("Please input the number of cloth and trouser, 使用空格分隔:");
    scanf("%d,%d",&countOfCloth,&countOfTrouser); // 1 2
    // 4) 计算总价
    double money = priceOfCloth * countOfCloth + priceOfTrouser * countOfTrouser;
    // 5) 计算折扣价
    double moneyAfterDiscount = money * 0.88;
    // 6 输出
    printf("Money after discount is %lf \n",moneyAfterDiscount); // 106.374400
    
    // 4 算术运算的优先级
    int math = 3+ (2-5) *0;
    printf("%d\n",math); // 3
    
    // 5 char类型
    char ch = 'a';
    printf("%d\n",ch); // 97
    printf("%c\n",ch+10); // k
    printf("%d\n",ch+10); // 107
    printf("%d\n",'a'+'A'); // 162
    // 如何将'a'转换成'A'？
    printf("%c\n",'a'-32); // A
    printf("%c\n",'a'-('a'-'A')); // A
    return 0;
}
/*
1 算术运算符
（1）+
（2）-
（3）*
（4）/ :除法。
     整数的操作结果，结果始终是整数。
     如何让结果带小数点？
 
（5）% :求模。求余数。
     应用场景：
     a)判断是不是偶数,可以被2整除。
     b)隔行变色
     c)判断一个数能不能被另外一个数整除。
     判断1个年份是不是闰年，年份是否被400整除。
     
     注意：
     a)求模运算，不能有小数参与。
     b)m%n,结果一定是[0,n-1]
 
2 算术表达式
    由算术运算符链接起来的式子，就叫做算术表达式
    e.g., 1+3;
 
    算术表达式的顺序：先声明变量，然后计算表达式的结果，最后把这个表达式的结果赋值给变量。
 (1)如果参与算术表达式的操作数的类型是一致的，那么算术表达式的结果的类型，就是这个类型。
 (2)如果参与算术表达式的操作数的类型不一致，那么算术表达式的结果的类型，就是范围最大的那个类型。
    int < float < double

 3 课堂练习
 超市120.88/件，裤子89.9/1条。
 让顾客输入衣服数量和裤子数量。
 1)显示应付多少钱
 2)如果商家打折88折，再显示打折以后应该应付多少钱
 
 无论做题目，还是做项目？
 1)先不要着急写代码。先看清楚需求。
 2)分析。
     a)先把自己当成一个普通人。如果在生活中遇到这样的问题，你改如何解决。
        衣服的单价 * 衣服数量 + 裤子的单价 * 裤子数量
     b)写注释。思路和步骤用中文写出来。
     c)再根据思路注释写代码。
4 算术运算的优先级
 先乘除模，再加减。
 如果同级别，从左到右依次计算。
 使用()可以改变运算的优先级。如果有()先算()。
 
5 char类型
char类型的数据可以参与算术运算.
当算术表达式的操作数式char类型，先把char数据的ASCII码取出来代替。然后再参与算术运算。
所以，如果操作数式char类型，实际上它是1个int类型的数据再参与运算。

要将大写换为小写？+32
要将小写换为大写？-32
 */
