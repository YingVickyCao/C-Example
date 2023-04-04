//  数组的其他应用.c

#include <stdio.h>
#include <stdlib.h>

int isContainsRandom(int randoms[], int length, int key) {
for (int i = 0; i < length; i++) {
    if (key == randoms[i]) {
        return 1;
    }
}
return 0;
}

//int main(int argc, const char *argv[]) {
 int main_9_5(int argc, const char *argv[]){

// 1、随机产生一个双色球的号码
// 方案1:不可以，因为会产生重复数字
{
    /**
     13  8  1  23  15  30 => 不重复
     13  6  8  6  3  24 => 重复了
     */
    for (int i = 0; i < 6; i++) {
        int num = arc4random_uniform(33) + 1;
        printf("%d  ", num);
    }
}

printf("\n");

// 1、随机产生一个双色球的号码
// 方案2:可以。
{
    // 1、数组，用来存储已经产生好的随机数。
    int randomBalls[6] = {0};
    // 2、产生6个随机数。
    // 将产生的随机数存储起来。
    // 每产生1个随机数，判断数组是否包含了这个随机数。
    // 如果包含，说明这个数字之前已经产生过了，重新产生。
    // 如果不包含，说明这个数字之前没有产生，就存储到数组当中。

    /**
     5  14  33  15  重复产生15  12  8
     => 5  14  33  15  12  8
     */
    for (int i = 0; i < 6; i++) {
        int num = arc4random_uniform(33) + 1;
        // 判断数组是否包含了这个随机数。
        if (isContainsRandom(randomBalls, 6, num) == 0) {
            randomBalls[i] = num;
            printf("%d  ", num);
        } else {
            printf("重复产生%d  ", num);
            i = i - 1;
        }
    }

    // 优化
    for (int i = 0; i < 6;) {
        int num = arc4random_uniform(33) + 1;
        // 判断数组是否包含了这个随机数。
        if (isContainsRandom(randomBalls, 6, num) == 0) {
            randomBalls[i] = num;
            printf("%d  ", num);
            i++;
        } else {
            printf("重复产生%d  ", num);
        }
    }

    printf("\n");
    for (int i = 0; i < 6; i++) {
        printf("%d  ", randomBalls[i]);
    }
}
printf("\n");

// 2、数组排序 - 选择排序
{
    // 要求从大到小排序
    int nums[] = {3, 22, 18, 19, 10};
    int length = sizeof(nums) / sizeof(int);
    for (int i = 0; i < length - 1; i++) {
        // 打印当前数组
        printf("init (%d     ) ", i);
        for (int i = 0; i < length; i++) {
            printf("%d  ", nums[i]);
        }
        printf("\n");

        for (int j = i + 1; j <= length - 1; j++) {
            printf("after(%d vs %d) ", i, j);
            if (nums[i] < nums[j]) {
                // 交换数据
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }

            // 打印当前数组
            for (int i = 0; i < length; i++) {
                printf("%d  ", nums[i]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

// 3、数组排序 - 冒泡排序
{
    int nums[] = {3, 22, 18, 19, 10};
    int length = sizeof(nums) / sizeof(int);
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (nums[j] < nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++) {
        printf("%d  ", nums[i]);
    }
    printf("\n");
}

// 二分查找法
{
    // 找出78在数组中的下标
    int nums[] = {10, 19, 20, 40, 45, 56, 78, 100};
    int len = sizeof(nums) / sizeof(int);

    int min = 0;
    int max = len - 1;
    int middle = len / 2;
    int key = 78;

    printf("(min %d,%d),(middle %d,%d),(max %d,%d)\n", min, nums[min], middle, nums[middle], max, nums[max]);

    while (nums[middle] != key) {
        if (nums[middle] > key) {
            max = middle - 1;
        } else if (nums[middle] < key) {
            min = middle + 1;
        }
        middle = (min + max) / 2;

        printf("(min %d,%d),(middle %d,%d),(max %d,%d)\n", min, nums[min], middle, nums[middle], max, nums[max]);
    }
    printf("find it. i=%d, value = %d\n", middle, nums[middle]);
}

// 翻转
{
    // {3,22,18,19,10}
    // 翻转后 {10,19,18,22,3}

    int nums[] = {3, 22, 18, 19, 10};
    int length = sizeof(nums) / sizeof(int);

    printf("%d  \n", length);

    for (int i = 0;i<length/2; i++) {
        int temp = nums[i];
        nums[i] = nums[length-1-i];
        nums[length-1-i] = temp;
    }
    for (int i = 0; i < length; i++) {
        printf("%d  ", nums[i]);
    }
    printf("\n");
}

return 0;
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
n个数，比较n-1轮。
第i轮，index=i与剩下的比较

2）、冒泡排序
n个数，比较n-1轮。
每1轮比较次数 =  长度-1 - 轮数i

3、二分查找法，又叫折半查找
 在1个数组中查找指定的元素的下标
 1）、从头到尾遍历。效率低下
 2）、二分查找法。前提是：数组有序。
 int min = 0;
 int max = len-1
 int mid = len/2
 while key != array[middle]
 {
     array[mid]<key, right, max =min-1, mid = (min+max)/2
     array[mid]>key, left, min = mid+1, mid = (min+max)/2
 }
*/
