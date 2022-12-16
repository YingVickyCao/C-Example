//  指针的应用.c

#include <stdio.h>

void test_10_2(int num){
    num = 5;
}

void test2_10_2(int* num){
    *num = 5;
}

int getMaxAndMin_10_2(int array[], int length,int* pMin){
//    int min = array[0];
    *pMin = array[0];
    
    int max = array[0];
    for (int i = 1; i < length; i++) {
//        if(min > array[i]){
//            min = array[i];
//        }
        if(*pMin > array[i]){
            *pMin = array[i];
        }
        if(max < array[i]){
            max = array[i];
        }
    }
    return max;
}

void getMaxAndMin2_10_2(int array[], int length,int* pMin, int* pMax){
//    int min = array[0];
    *pMin = array[0];
    
    *pMax = array[0];
//    int max = array[0];
    for (int i = 1; i < length; i++) {
//        if(min > array[i]){
//            min = array[i];
//        }
        if(*pMin > array[i]){
            *pMin = array[i];
        }
//        if(max < array[i]){
//            max = array[i];
//        }
        
        if(*pMax < array[i]){
            *pMax = array[i];
        }
    }
}

//int main(int argc, const char *argv[]) {
int main_10_2(int argc, const char *argv[]) {
    
    // 值传递
    {
        int num = 0;
        test_10_2(num);
        printf("%d\n",num); // 0
    }
    // 指针作为函数参数
    {
        int num = 0;
        int* p = &num;
        test2_10_2(p);
        printf("%d\n",num); // 5
    }
    
    // 6、什么时候需要将指针作为函数参数？需要返回多个值。
    {
        {
            int array[3] = {1,9,4};
            int min = 0;
            int max = getMaxAndMin_10_2(array, 3,&min);
            printf("%d\n",max); // 9
            printf("%d\n",min); // 1
        }
        {
            int array[3] = {1,9,4};
            int min = 0;
            int max = 0;
            getMaxAndMin2_10_2(array, 3,&min, &max);
            printf("%d\n",max); // 9
            printf("%d\n",min); // 1
        }
    }
    
    // 7、指针分很多中类型？
    {
        // 指针变量，在字节中占据8个字节。
        {
            int* p = NULL;
            double* p2 = NULL;
            printf("%d\n",sizeof(p));   //8
            printf("%d\n",sizeof(p2));  //8
            
            int num = 5;
            p = &num;
            printf("%ul\n",p);   // 3220173804l
        }
    }
    
    return 0;
}


/**
 1、会使用指针间接操作指针指向的变量。
    指针的作用：通过指针间接操作指针指向的变量。
 
    难道指针的作用，仅仅是为了间接操作吗？
 2、当函数形参是基本类型 int、char、double、float，传递是值传递，对实参的值没有影响。
 
 3、当函数形参是数组时， 传递是地址传递，对实参的值有影响。
 
 4、指针是一种新的数据类型
    指针类型可以作为函数参数。
 
 5、指针作为函数的参数，可以实现效果？
    在函数内部可以修改实参变量的值。
 
 6、什么时候需要将指针作为函数参数？
    1）、遇到的问题？
    函数只能返回1个值。如果需要返回多个值怎么办？
     
    2）、解决方案：将指针变量作为函数形参。
    让调用者将自己的变量的地址传递到函数内部。
    函数内部通过指针修改实参到值。

    3）、当函数需要返回多个数据的时候，就可以使用指针作为函数形参。
 
 7、指针分很多中类型？ => See Excel
    int* / float* / double* /char*
 
    无论什么类型的指针变量，在字节中占据8个字节。
    为什么还需要分类型？
 
    通过间接指针间接操作指针指向的变量的方式。
    int num = 10
    int * p = &num;
 
    指针变量p中存储的是num变量的地址，也就是num变量的低字节的地址。
    通过指针变量p只能知道这个地址的低字节的。
    这时，通过p找到这个字节，操作的时候，要操作多少个字节空间？
 
    根据指针的类型决定了，通过这个指针变量找到字节以后，连续操作多少个字节空间。
    int*  -> 连续4个
    double*  -> 连续8个
    float*  -> 连续4个
    char*  -> 连续1个
 
    所以，指针的类型如果不和指向的变量的类型相同的话，那么通过指针就无法正确的操作指向的变量。
    所以，指针变量一定要指向1个和自己类型相同的普通变量才可以。
 
 */
