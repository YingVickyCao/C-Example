#include <stdio.h>

int main(int argc, const char* argv[]){
//int main_scanf(int argc, const char* argv[]){
    // Step 1 : get QQ numner and passwrod
    int num = 0;
    printf("Please input a int value:");
    scanf("%d",&num);// 让用户输入指定类型的数据，并存入变量的地址。
    printf("Int value is %d\n",num);
    
    
    float f1 = 0.0f;
    printf("Please input a float value:");
    scanf("%f",&f1); // 1.2
    printf("Float value is %f\n",f1);   // 1.200000
    
    
    double d = 0.0;
    printf("Please input a double value:");
    scanf("%d",&d);
    printf("Double value is %lf\n",d);
    
    char ch = ' ';
    printf("Please input a char value:");
    scanf("%c",&ch);
    printf("Char value is %c\n",ch);
    
    return 0;
}

/**
 scanf ：
 (1) 作用：在程序运行时，让用户输入数据。然后将用户输入的数据，赋值指定的变量
 (2)格式 : scanf("格式控制符",变量地址列表);
  用 & 来取变量的地址
 (3) scanf函数的执行原理
    scanf是1个阻塞式的函数。当CPU执行到这个scanf函数的时候，CPU的执行就会暂停，不会继续往下执行了。并等待用户输入数据。
    当用户输入完毕，并按回车表示输入完毕。
    这个时候，就会将用户输入的数据赋值给后面给定的变量。
    然后继续往下执行。

 注意：
 （1）如果程序没有输出信息，下面的控制台输出区域不会自动弹出来。
 （2）如果之前的程序没有停止，要再运行程序的话，建议将之前的程序停掉。否则可能会出现一些乱七八糟的情况。
 */
