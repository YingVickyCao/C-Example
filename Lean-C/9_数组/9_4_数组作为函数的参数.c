//  数组作为函数的参数.c

#include <stdio.h>

void test_9_4(int num);
void testArray_9_4_wrong(int nums[3]);
void testArray_9_4_ok(int nums[], int length);
void testSetArray_9_4(int nums[], int length);

int main(int argc, const char *argv[]) {
    //int main_9_4(int argc, const char *argv[]) {
    
    // // 值传递
//    {
//        int num = 10;
//        test_9_4(10);
//        printf("%d\n",num);
//
//        int arr[]= {10,20,305,4,5};
//        test_9_4(arr[0]);
//        printf("%d\n",arr[0]);
//    }
    // // 数组作为函数的参数
//    {
//        int arr[]= {10,20,305,4,5};
//        testArray_9_4_wrong(arr);
//    }
    // // 数组作为函数的参数
//    {
//        int arr[]= {10,20,305,4,5};
//        int length = sizeof(arr)/sizeof(int);
//        testArray_9_4_ok(arr,length);
//    }
    // // 数组作为函数的参数
    {
        int arr[]= {10,20,305,4,5};
        int length = sizeof(arr)/sizeof(int);
        testSetArray_9_4(arr,length);
        
        /**
         nums[0]=0
         nums[1]=1
         nums[2]=2
         nums[3]=3
         nums[4]=4
         */
        for (int i = 0;i<length; i++) {
            printf("nums[%d]=%d\n",i,arr[i]);
        }
    }
    return 0;
}

// 值传递
void test_9_4(int num){
    num = 100;
}

/**
 nums[0]=10
 nums[1]=20
 */
// 数组作为函数的参数 : wrong
void testArray_9_4_wrong(int nums[3]){
    // Warning : Sizeof on array function parameter will return size of 'int *' instead of 'int[3]'
    int totalLength = sizeof(nums); // ERROR: is always 8
    int lenght = totalLength/sizeof(int); // length = 2
    for (int i = 0;i<lenght; i++) {
        printf("nums[%d]=%d\n",i,nums[i]);
    }
}

/**
 nums[0]=10
 nums[1]=20
 nums[2]=305
 nums[3]=4
 nums[4]=5
 */
// 数组作为函数的参数 : ok
void testArray_9_4_ok(int nums[], int length){
    for (int i = 0;i<length; i++) {
        printf("nums[%d]=%d\n",i,nums[i]);
    }
}

void testSetArray_9_4(int nums[], int length){
    for (int i = 0;i<length; i++) {
        nums[i] = i;
    }
}
/**
 1、函数的参数
   为函数传参的过程就是1个赋值的过程。
   把实参赋值给形参。
 
 2、当参数的类型是 int、double、float、char类型的时候，调用者传入1个实参，函数执行完毕之后，对实参变量的值没有影响。
 
   这种传递，叫做值传递。
   调用者将实参传递到函数，不管函数内部如何操作形参，对实参没有影响。
 
 3、当1个函数的参数是1个普通变量的时候，那么传递数组的元素。前提是数组的元素和参数的类型完全一致。
 
 4、数组是否可以作为函数的参数？
    可以。
    因为数组也是一个数据类型。
    1）、声明
    void testArray_9_4(int nums[3]){
 
    2）、传递参数时，形参和实参，数组的类型必须一致。
 
    3）、遇到的问题
    在函数内部，用sizeof去计算 形参数组 的字节数时，发现：无论实参数组的长度有多大，得到的永远是8.
    为什么？
    因为在数组作为形参时，那么实参传递给形参时，会丢失数组的长度。
    结论：当数组作为形参时，在函数的内部使用sizeof 来计算数组的长度时，永远都是8.
    所以，在函数内部无法使用sizeof计算形参数组的长度。
 
    4）、为什么？
        a）、 如果函数的参数是1个数组，在声明这个参数的时候，并不会去真正创建数组。
        而是去声明1个用来存储数组地址的1个指针变量。
        这个指针变量在内存中占8个字节。
        所以，通过sizeof去计算参数数组的字节的时候，得到的永远都是8.

    b）、在传递的时候，是把实参数组名传递进来。
        数组名代表数组的地址。所以，这时传值，传的是数组的地址。
        把数组的地址传递给了函数的参数。 那么，函数的参数也指向了实参数组。
    
    5）、如何解决？
    让调用者把实参数组的长度也传递给函数。
    函数就不要去算了，算也算不出来。
 
    注意：如果函数的参数是1个数组，这时还需要加1个参数，让调用者把这个数组的长度传递过来。
 
    6）、当数组作为函数的参数时，实际上它不是1个数组，而是用1个用来存储数组地址的指针变量。
    所以，当数组作为函数的参数时，长度没有必要写。
 
 5、当函数的参数是1个数组时，那么在传递时，传递的是实参数组的地址。所以，形参指针指向了实参数组。
    这个时候通过形参数组指针操作数组，实际上操作的是实参数组。
 
    这种参数传递，叫做地址传递。
    目前为止，只有数组有这个特性。
 
 6、重要结论：
    1）、当数组作为函数的参数时，会丢失数组的长度。 所以，还需要1个参数，让调用者将传入的数组长度。
    2）、当数组作为函数的参数时，在函数内部去修改这个函数数组的元素，实际上修改的是实参数组的元素。
 */
