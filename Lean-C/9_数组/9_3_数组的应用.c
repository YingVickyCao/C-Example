// 数组的应用.c

#include <stdio.h>

//int main(int argc, const char *argv[]) {
int main_9_3(int argc, const char *argv[]) {
    
    int array[] = {10,45,89,2,45,46,78,67};
    int len = sizeof(array)/sizeof(int);
    // 一个整型数组，找出数组中最大值。
    {
        
        int max = array[0];
        for (int i = 1; i<len; i++) {
            if(array[i] > max){
                max = array[i];
            }
        }
        printf("max is %d\n",max);
    }
    
    // 一个整型数组，找出数组中最小值。
    {
        int min = array[0];
        for (int i = 1; i<len; i++) {
            if(array[i] < min){
                min = array[i];
            }
        }
        printf("min is %d\n",min);
    }
    
    // 一个整型数组，找出数组中累加和。
    {
        int sum = 0;// 框变量
        for (int i = 1; i<len; i++) {
            sum += array[i];
        }
        printf("sum is %d\n",sum);
    }
    // 一个整型数组，判断是否包含指定的元素
    {
        int num = 12;
        int isExistNum = 0;
        for (int i = 0; i<len; i++) {
            if(array[i] == num){
                isExistNum = 1;
                break;
            }
        }
        if(isExistNum == 1){
            printf("Have %d\n",num);
        }
        else{
            printf("Not have %d\n",num);
        }
    }
    // 找出指定的元素，第一次出现的下标
    {
        int index = -1;
        int num =45;
        for (int i = 0; i<len; i++) {
            if(array[i] == num){
                index = i;
                break;
            }
        }
        if(index == -1){
            printf("Not find %d\n",num);
        }
        else{
            printf("The first index of %d is %d\n",array[index],index);
        }
    }

    return 0;
}


/**
 1、什么时候使用数组？
     有多个 类型相同 并且数据的意义一样 的数据需要存储的时候。

     人数：58
     学费：200
     页面：400
     虽然类型相同，但是数据的意义不同，所以，并不适合用数组存储。
     
     学习小组人的分数：90、87、50、86
 
2、关于数组，必须会的几种算法？
 1）、一个整型数组，找出数组中最大值。
 2）、一个整型数组，找出数组中最小值。
 3）、一个整型数组，找出数组中累加和。
 4）、一个整型数组，找出数组中平均值。
 5）、一个整型数组，判断是否包含指定的元素
 6）、一个整型数组，找出指定的元素，第一次出现的下标
 */
