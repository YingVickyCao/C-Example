#include <stdio.h>
/**
 prinft : 向控制台输出信息

 (1)int   %md  m 是整数，指定输出变量时占多少位.
 e.g., %5d,
 如果变量小于5位，不足用空格补齐。
 如果变量>=5位，实际有多少位就显示多少位

 e.g., %05d, 如果变量小于5位，不足用0补齐
 
 m为正数，前面补齐，
 m为负数，后面补齐

 (2)double  %.nlf 指定输出小数点后的位数
 (3)float  %.nf 指定输出小数点后的位数
 */

void prinf_int();
void prinf_double();

//int main(int argc, const char* argv[]){
int test_prinf(int argc, const char* argv[]){
    //    prinf_int();
        prinf_double();
    return 0;
}


void prinf_int()
{ // Int
    int num = 10;
    //10
    printf("%d\n",num);
    //   10
    printf("%5d\n",num); // %md
    int x = 123456789;
    // 123456789
    printf("%5d\n",x); // %md
    //10   XXX
    printf("%-5dXXX\n",num); // %md
    
    //00010
    printf("%05d\n",num);
    
    
}

void prinf_double(){
    // Double
    double d = 10.1234567890;
    // 10.123457
    printf("%lf\n",d); // Default 输出 6 位。 7 四舍五入后进位1
    
    // Double
    double d2 = 10.123456123;
    // 10.123456
    printf("%lf\n",d2); // Default 输出 6 位。 1 四舍五入是0，不进位，
    
    // 10.12
    printf("%.2lf\n",d); // 指定输出小数点后的2位
}
