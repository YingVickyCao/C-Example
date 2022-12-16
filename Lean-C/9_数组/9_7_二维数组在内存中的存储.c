// 二维数组在内存中的存储

#include <stdio.h>

void test_9_7(int array[], int len){
    for(int j = 0; j<len;j++){
        printf("%d ",array[j]);
    }
    printf("\n");
}

void test_1_in_9_7(int num){
    
}

// Warning：Sizeof on array function parameter will return size of 'int (*)[4]' instead of 'int[3][4]'
void test_2_9_7_wrong(int array[3][4]){
    int len = sizeof(array); // 8
    printf("%d\n",len);
}

// Warning：Sizeof on array function parameter will return size of 'int (*)[4]' instead of 'int[][4]'
void test_2_9_7_depressed(int array[][4],int row,int column){
    int len = sizeof(array); // 8，还是算不出来。
    printf("%d\n",len);
    
    for(int i = 0;i<row;i++){
        for(int j = 0; j<column;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void test_2_9_7_ok(int row,int column,int array[][column]){
    int len = sizeof(array); // 8，还是算不出来。
    printf("%d\n",len);
    
    for(int i = 0;i<row;i++){
        for(int j = 0; j<column;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


//int main(int argc, const char *argv[]) {
int main_9_7(int argc, const char *argv[]) {
    
    {
        // 3、二维数组的本质
        int array[3][4] = {10, 20, 34, 2, 25, 30, 40, 15, 12, 5, 6, 30};
        // 证明：二维数组的每1行，其实是1个一维数组。
        test_9_7(array[0],4);
        
        // 4、二维数组的地址
        printf("%p\n",&array[0][0]); // 0x7ff7bfeff410
        printf("%p\n",array[0]);     // 0x7ff7bfeff410
        printf("%p\n",array);        // 0x7ff7bfeff410
        
        // 5、1）求二维数组的长度：元素的个数。
        printf("%d\n",sizeof(array));        // 48
        printf("%d\n",sizeof(array)/sizeof(int));        // 13
        printf("%d\n",sizeof(array)/sizeof(array[0][0]));        // 13
        
        // 5、2）、求二维数组的行数
        int row = sizeof(array)/sizeof(array[0]);
        printf("row=%d\n",row);  // 3
        
        int colum = sizeof(array[0])/sizeof(array[0][0]);
        //    int colum = sizeof(array[0])/sizeof(int);
        printf("colum=%d\n",colum);  // 4
        
        for(int i = 0;i<row;i++){
            for(int j = 0; j<colum;j++){
                printf("%d ",array[i][j]);
            }
            printf("\n");
        }
        
    }
    // 5、二维数组的长度，以及行列计算。
    {
        int array[][4] = {10, 20, 34, 2, 25, 30, 40, 15, 12, 5, 6, 30};
        int row = sizeof(array)/sizeof(array[0]);
        printf("row=%d\n",row);  // 3
        
        int colum = sizeof(array[0])/sizeof(array[0][0]);
        //    int colum = sizeof(array[0])/sizeof(int);
        printf("colum=%d\n",colum);  // 4
    }
    
    // 7、函数传递
    {
        int array[3][4] = {10, 20, 34, 2, 25, 30, 40, 15, 12, 5, 6, 30};
        test_1_in_9_7(array[0][0]); // ok
        test_9_7(array[0],7);// ok
        
        test_2_9_7_wrong(array); // 丢失行数和列数
        test_2_9_7_depressed(array, 3,4);
        int array2[2][2] = {10, 20, 34, 2};
        // 定义和声明，列数不一致，也能调用。但是会报警告
        // Warning:Incompatible pointer types passing 'int[2][2]' to parameter of type 'int (*)[4]'
        test_2_9_7_depressed(array2, 2,2);
        test_2_9_7_ok(2,2,array2);
    }
    
    return 0;
}


/*
 1、一维数组表示1条线。要确定线的一个点需要1个下标。
    二维数组表示1个面。要确定面的一个点需要2个下标（行和列）。
 
 2、二维数组是1个表格。声明一个二维数组并不是真的在内存中创建1个表格。虽然不是，但是这么理解是没有任何问题的。
    int array[2][3]
    1)、从高地址到低地址，申请了连续的（行*列*每1个元素占用的字节）个字节空间。
    2）、第0行在低字节。
    二维数组在内存中仍然是1个连续的空间，并不是一个表格。
 
 3、二维数组的本质
    二维数组其实是一个一维数组。只不过这个一维数组的每1个元素的类型又是1个数组，
    int array[2][3] ： 可以这么理解：长度为2的一维数组，每一个元素又是一个长度是3的数组。
    所以，二维数组的每1行，其实是1个一维数组。
 
 4、二维数组的地址
 1）、组成这个数组的低字节的地址，是 这个二维数组的地址。
    也就是第0行的地址，也就是第0行的第0个元素的地址。
    二维数组名就代表这个二维数组的地址。
    总结：二维数的地址 = 二维数组名 = 二维数组的第0行的地址 = 二维数组的第0行的第0个元素的地址 = 二维数组的低字节的地址
 
 5、二维数组的长度，以及行列计算。
    1）、求二维数组的长度：元素的个数。
    sizeof(数组名)/sizeof(元素的类型)
    sizeof(数组名)/sizeof(数组名[0][0])
    二维数组的总字节数/每一个元素所占的字节数
 
    2)、求二维数组的行数
    二维数组的每1个行占用的字节数是一样的。
    int row = sizeof(array)/sizeof(array[0]);
    二维数组的总字节数/每一行占用的字节数
 
    3）、求二维数组的列数
    int colum = sizeof(array[0])/sizeof(array[0][0]);
    int colum = sizeof(array[0])/sizeof(int);
    每一行总字节数/每一个元素所占的字节数
    
    求长度：行数*列数。
 
 6、注意
    1）、在声明二维数组时，如果使用{}初始化元素，那么行数可以省略，列数不可以省略。
    int array[][4] = {10, 20, 34, 2, 25, 30, 40, 15, 12, 5, 6, 30};
    2）、在声明二维数组时，如果不使用{}初始化元素，那么就必须写行数和列数。
    int array[3][4];
 
 7、函数传递
    1)、如果函数的参数是一个一组数组，那么可以传递二维数组的某一行。
    二维数组的某一行其实是一个一维数组。
    
    2）、二维数组可以作为函数的参数
    类似于一维数组作为形参，二维数组作为函数的形参时,会丢失这个二维数组的长度（行数和列数）。
    因为声明参数二维数组的时候，并不是去创建一个二维数组。
    而是创建1个用来存储数组地址的指针变量。
    而指针变量是8个字节。
    所以，在函数内部使用sizeof计算二维数组形参时，得到的永远是8个字节。
 
    3）、形参二维数组，行数可以省略，但是列数不能省略。
        实参二维数组，行数任意，但是列数必须和形参一致。
 
    4）、解决方案
    让调用者将二维数组的行数、列数都传递。
    形参和实参，列数必须一致。 列数不一致，虽然也能调用，但是有警告。
    
    怎么解决？
    写参数的时候，先写行数和列数，然后再写二维数组，二维数组的列数用参数指定. 这样二维数组的列数可以传递任意值了。
    void test(int row,int column,int array[][column])
 
 
 */
