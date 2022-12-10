//  数组的其他应用.c

#include <stdio.h>
#include <stdlib.h>

int isContainsRandom(int randoms[], int length,int key){
    for(int i = 0; i<length;i++){
        if(key == randoms[i]){
            return 1;
        }
    }
    return 0;
}

int main(int argc, const char *argv[]){
//int main_9_5(int argc, const char *argv[]){
    
    // 1、随机产生一个双色球的号码
    // 方案1:不可以，因为会产生重复数字
    {
        /**
         13  8  1  23  15  30 => 不重复
         13  6  8  6  3  24 => 重复了
         */
        for(int i = 0; i<6;i++){
            int num = arc4random_uniform(33)+1;
            printf("%d  ",num);
        }
    }
    
    printf("\n");
    
    // 1、随机产生一个双色球的号码
    // 方案2:可以。
    {
        // 1、数组，用来存储已经产生好的随机数。
        int randomBalls[6]={0};
        // 2、产生6个随机数。
        // 将产生的随机数存储起来。
        // 每产生1个随机数，判断数组是否包含了这个随机数。
        // 如果包含，说明这个数字之前已经产生过了，重新产生。
        // 如果不包含，说明这个数字之前没有产生，就存储到数组当中。
        
        /**
         5  14  33  15  重复产生15  12  8
         => 5  14  33  15  12  8
         */
//        for(int i = 0; i<6;i++){
//            int num = arc4random_uniform(33)+1;
//            // 判断数组是否包含了这个随机数。
//            if(isContainsRandom(randomBalls, 6, num) == 0){
//                randomBalls[i] = num;
//                printf("%d  ",num);
//            }
//            else{
//                printf("重复产生%d  ",num);
//                i = i-1;
//            }
//        }
        
        // 优化
//        for(int i = 0; i<6;){
//            int num = arc4random_uniform(33)+1;
//            // 判断数组是否包含了这个随机数。
//            if(isContainsRandom(randomBalls, 6, num) == 0){
//                randomBalls[i] = num;
//                printf("%d  ",num);
//                i++;
//            }
//            else{
//                printf("重复产生%d  ",num);
//            }
//        }
//
//        printf("\n");
//        for(int i = 0; i<6;i++){
//            printf("%d  ",randomBalls[i]);
//        }
    }
    printf("\n");
    
    
    // 2、数组排序 - 选择排序
    {
        // 要求从大到小排序
        int nums[] = {3,22,18,19,10};
        int length = sizeof(nums)/sizeof(int);
        for (int i = 0; i<length-1; i++) {
            // 打印当前数组
            printf("init (%d     ) ",i);
            for(int i = 0; i<length;i++){
                printf("%d  ",nums[i]);
            }
            printf("\n");
            
            for (int j= i+1; j<=length-1; j++) {
                printf("after(%d vs %d) ",i,j);
                if(nums[i]< nums[j]){
                    // 交换数据
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
                
                // 打印当前数组
                for(int i = 0; i<length;i++){
                    printf("%d  ",nums[i]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;;
}
/**
 1、随机产生一个双色球的号码
   1～33 随机产生6个不同重复的数。
   1～16 产生1个随机数。
 
 思路：
 将产生的随机数存储起来。
 每产生1个随机数，就判断之前新产生的随机数和之前的有没有重复。如果重新产生，丢掉？如果不重复产生，存储起来。
 
 2、数组的排序
 给一个整型数组，把这个数组的元素按照从大到小，或从到大排序。
 
    1）、选择排序
    2）、冒泡排序
 
 3、选择排序
 n个数，比较n-1轮。
 
 4、冒泡排序
 */
