/**
 变量的作用域
 
 1 声明在大括号{}中的变量，当{}被CPU执行完毕后，定义在{}中的变量，就会被系统立即回收。
 
 所以定义在{}中的变量，只能在{}中访问，因为这个{}还没有结束，这个变量都在。
 出了{}，无法访问定义在{}中的变量。因为{}一旦结束，定义在{}中的变量就会被系统立即回收。
 
 变量的作用域：指的是变量可以在哪段范围内可以访问。
            离变量最近的大括弧。
 
 2 自定义一个作用域，来提前释放1个变量
 手动添加一个{}
 
 3 如何提高程序的性能？
 提前释放变量
 省内存
 
 4 在不同的作用域{}当中，或者不同层级的作用当中，可以定义相同的变量。（Depressed）
 这时，内层将屏蔽外层的变量。
 在内层中访问的是内层的变量。
 在外层中访问的是外层的变量。
 */
#include <stdio.h>

//int main(int argc, const char *argv[]) {
int main_3_3(int argc, const char *argv[]) {
    {// 手动添加一个{},来加快变量num的释放。
        int num = 2;
        if(num > 1){
            int page = 10;
            printf("%d\n",page);    // 10
            
            int num = 20; // Depressed
            printf("%d\n",num); // 20
        }
        printf("%d\n",num); // 2
    }
    // Error : compile error : Use of undeclared identifier 'page'
//    printf("%d\n",page);
    
    // long long code
    return 0;
}
