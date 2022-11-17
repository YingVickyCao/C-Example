// 如何产生1个随机数
#include <stdio.h>
#include <stdlib.h>
//int main(int argc, const char *argv[]) {
int main_3_4(int argc, const char *argv[]) {
    
    // 1 产生1个0到9的随机数
    int num = arc4random_uniform(10); // 0~9;
    printf("%d\n",num);
    
    for (int i=0; i<=5; i++) {
        printf("%d ",arc4random_uniform(10));
    }
    printf("\n");
    
    // 2 产生1个指定范围的随机数
    // 10 - 20
    for (int i=0; i<=5; i++) {
        printf("%d ",arc4random_uniform(20 - 10 + 1) + 10);
    }
    printf("\n");
    return 0;
}
/**
 1 产生1个0到9的随机数
 #include <stdlib.h>
 arc4random_uniform(10); // 0~9;
 
 2 产生1个指定范围的随机数
 arc4random_uniform(最大值 - 最小值 + 1) + 最小值
 */
