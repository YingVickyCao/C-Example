//  数组在内存中的存储
#include <stdio.h>

//int main(int argc, const char *argv[]) {
int main_9_2(int argc, const char *argv[]) {
    int array[3];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    
    // 2、数组的地址
    printf("%p\n",&array[0]);   // 0x7ff7bfeff43c
    printf("%p\n",array);       // 0x7ff7bfeff43c
    
    // 3、数组的长度计算
    int length = sizeof(array);
//    int element_length = sizeof(4); // not good
    int element_length = sizeof(int); // good
//    int element_length = sizeof(array[0]);// good
    int size = length/element_length;
    printf("total length = %d, elemet length = %d, size = %d\n",length,element_length,size);// 12, 4, 3
    return 0;
}

/*
 1、数组在内存中的存储是如何存储的？
 
    int array[3];
    
    1）、声明1个数组。在内存中从高字节到低字节申请连续的（数组的长素 * 每个元素的字节数）个字节的空间。
    2）、下标为0的元素在低字节
    3）、元素的值，跟之前一样，存储的还是数据的二进制的补码。
    4）、数组的元素的本质，就是1个普通类型的变量。
         一个数组就是由多个普通类型的变量联合而成。
         每1个元素就是1个普通变量，所以，每1个元素也有自己的地址。
     
 2、数组的地址
    1）、数组的地址是数组中最低字节的地址。
    2）、数组的地址是数组中下标为0的元素的地址。
    3）、数字的地址是数组中下标为0的元素的低字节的地址。
    4）、数组名，就代表数组的地址。
        C语言中数组名不代表整个数组，代表的是数组的地址。
        C语言的数组名中存储的是数组的地址。
        所以，不能直接打印数组名，这样得不到数组的元素的值，因为数组名中存储的是数组的地址。
        所以，用 %p 打印数组名。
 
        公式：
        数组的地址 == 数组名 == 数组中低字节的地址 == 数组中下标为0的元素的地址 == 数组中下标为0的元素的低字节的地址。
 
 3、数组的长度计算
    1）、数组的每一个元素的类型相同，所以数组的每一个元素占用的空间是一样的。
    2）、使用sizeof 计算数组总共占用的字节数。
    3）、得到数组占用的总字节数，那么用总字节数/每个字节占用的字节数，那么得到数组的长度。
        sizeof(数组名)/sizeof（每1个元素的字节数）// not good
    4)、不建议将字节数写死。元素占用的字节数建议用sizeof计算出来，因为不同系统、不同的编译器，相同的变量可能占用的字节不一样。
        sizeof(数组名)/sizeof（元素类型）// good
        sizeof(数组名)/sizeof（数组名[0]）// good
 
 */
