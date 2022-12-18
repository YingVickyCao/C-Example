//  指针与指针之间的加减运算.c

#include <stdio.h>

//int main(int argc, const char *argv[]) {
int main_10_7(int argc, const char *argv[]) {
    {
        int array[5] = {10,20,30,40,50};
        int* p1 = array;    // 指向第0个
        int* p2 = &array[1];// 指向第1个
        int* p4 = &array[4];// 指向第4个
        
        long value= p4-p1;
        printf("%ld\n",value);// 4
        printf("%ld\n",p2-p1);// 1
    }
    
    {
        int num1 = 100;
        double num2 = 10.1;
        double num3 = 10.2;
        int num4 = 200;
        
        int* p1 = &num1;
        int* p2 = &num4;
        
        long result = p2 - p1;
        
        printf("%ld\n",result);// -6，-5
        
    }
    return 0;
}
/**
 1、指针与指针之间可以做减法
    结果是1个long 类型的数据
 
    结果的意义：代表两个指针变量指向的变量之间相差多少个单位变量
    绝大对数情况下，在判断数组的两个元素之间相差多少个元素。
 
 2、如果参与减法运算的指针，不指向同一个数组，结果就有问题。
    两个指针变量的相减的结果：先求出两个指针的差/每个指针变量对应的普通变量占用的字节数
 
 3、唯一的意义
    在数组中，判断两个元素之间相差多少个元素。
 
 4、指针与指针之间，只能做减法。
 */
