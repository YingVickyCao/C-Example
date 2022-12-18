//  存储指针的数组.c

#include <stdio.h>

//int main(int argc, const char *argv[]) {
int main_10_6(int argc, const char *argv[]) {
    {
        int num1 = 100;
        int num2 = 200;
        int num3 = 300;
        
        int* p1 = &num1;
        int* p2 = &num2;
        int* p3 = &num3;
        
        int* array[3] = {p1, p2, p3};
        /**
         0x7ff7bfeff41c
         0x7ff7bfeff418
         0x7ff7bfeff414
         */
        for(int i = 0; i<3;i++){
            // 打印数组元素的值
            // 打印数组元素指向的变量的值
            printf("%p    %d\n",array[i],*(array[i]));
        }
    }
    
    {
        int array[3] = {10,20,30};
        // 把array中每一个元素的地址，存储到pArray中。
        int* pArray[3] ={array, &array[1], &array[2]};
        
        *(pArray[0]) = 100;// array数组的第0个元素。
        printf("%d\n",array[0]);    // 100
        
        int num = 1000;
        pArray[1] = &num;
        *(pArray[1]) = 2000;
        printf("%d\n",num);    // 2000
    }
    return 0;
}
/**
 1、存储指针的数组
    如果1个数组用来存储指针类型的数据，那么这个数组叫做存储指针的数组
 
    如何声明1个存储指针的数组？
    格式：元素类型 数组名[长度]
    int* array[3];
    元素的类型是int*，是int指针，用来存储int指针数据。最多存储3个。
 
 
 
 
 */
