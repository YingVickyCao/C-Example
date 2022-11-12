#include <stdio.h>
/**
 scanf ：
 (1) 作用：在程序运行时，让用户输入数据。然后将用户输入的数据，赋值指定的变量
 (2) 格式 : scanf("格式控制符",变量地址列表);
    用 & 来取变量的地址
 (3) scanf函数的执行原理
    scanf是1个阻塞式的函数。当CPU执行到这个scanf函数的时候，CPU的执行就会暂停，不会继续往下执行了。并等待用户输入数据。
    当用户输入完毕，并按回车表示输入完毕。
    这个时候，就会将用户输入的数据赋值给后面给定的变量。
    然后继续往下执行。
 (4) 如果用户输入的数据和要求的数据类型不一致，就有点小问题。
    If int, input is 小数，那么接收的只是整数部分。
    If int, input is 其他数据，那么接收失败，是默认值。
    因为可能接受失败，所以初始化时要设置默认值。
 (5) 用户在输入数据之前，输入的空格、回车、tab，都会被自动忽略。直到用户输入数据然后回车。
 (6) 使用scanf接受多个数据
 用户输入时，使用默认分隔符（空格、回车、tab）来分割多个数据。
 (7) 使用scanf接受多个数据，可以自定义分隔符.
 一旦指定了分隔符，就必须使用指定的分隔符，默认分隔符就不能再用了。

 scanf("%d-%d",&num1,&num2);


  Pease input two int data:10-20
  Two int are 10,20
  Program ended with exit code: 0

 (8) 如果使用scanf函数一次性输入多个数据，只能是数（整数和浮点数），如果有char混合输入，就会出问题。

 注意：
 (1) 如果程序没有输出信息，下面的控制台输出区域不会自动弹出来。
 (2) 如果之前的程序没有停止，要再运行程序的话，建议将之前的程序停掉。否则可能会出现一些乱七八糟的情况。
 (3) scanf函数后面不要加\n换行
 (4) scanf函数后面, 要写上变量的地址，而不是变量。
 (5) 占位符与后面的变量类型要对应， 否则就会出现意想不到的情况
 */
// int main(int argc, const char *argv[]) {
int main_scanf(int argc, const char *argv[]) {
    {
        int num = 0;
        printf("Please input a int value:");
        scanf("%d", &num); // 让用户输入指定类型的数据，并存入变量的地址。
                           //    scanf("%d\n",&num);    // wrong usesage
                           //    scanf("%d",num);       // wrong usesage
                           //    scanf("%c",num);       // wrong usesage
        printf("Int value is %d\n", num);
    }

    {
        float f1 = 0.0f;
        printf("Please input a float value:");
        scanf("%f", &f1);                  // 1.2
        printf("Float value is %f\n", f1); // 1.200000
    }

    {
        double d = 0.0;
        printf("Please input a double value:");
        scanf("%lf", &d);
        printf("Double value is %lf\n", d);
    }

    {
        char ch = ' ';
        printf("Please input a char value:");
        scanf("%c", &ch);
        printf("Char value is %c\n", ch);
    }

    {
        // (6)scanf接受多个数据
        int num1 = 0, num2 = 0;
        printf("Pease input two int data:");
        // 使用默认分隔符（空格、回车、tab）来分割多个数据。
        scanf("%d%d", &num1, &num2);
        printf("Two int are %d,%d\n", num1, num2);
    }
    {
        // (7)scanf接受多个数据
        int num1 = 0, num2 = 0;
        printf("Pease input two int data:");
        // 使用自定义分隔符
        scanf("%d-%d", &num1, &num2);
        printf("Two int are %d,%d\n", num1, num2);
    }

    // (8)
    {
        /*
         10 1.2 a
         Data is num=10,f2=1.200000,ch2=
         Program ended with exit code: 0
         */
        int num = 0;
        float f = 0.0f;
        char ch = 'a';
        scanf("%d%f%c", &num, &f, &ch);
        printf("Data is num3=%d,f2=%f,ch2=%c\n", num, f, ch);
    }

    return 0;
}
