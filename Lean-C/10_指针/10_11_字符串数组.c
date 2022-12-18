// 字符串数组.c

#include <stdio.h>

int main(int argc, const char *argv[]) {
//int main_10_11(int argc, const char *argv[]) {
    // 2）、使用二维的字符数组
    {
        char names[][10] = {
          "jack","rose","lily","hi123","tom"
        };
        
        for (int i = 0; i<5; i++) {
            puts(names[i]);
        }
        printf("\n");
    }
    
    // 3）、使用字符指针数组
    {
        // 字符串数据存储在常量区。5个字符指针中存储指向字符串数据在常量区的地址
        char* names[5] = {
            "jack","rose","lily","hi123","tom"
          };
        for (int i = 0; i<5; i++) {
            puts(names[i]);
        }
        printf("\n");
    }
    return 0;
}

/**
 1、字符串数组
    班级有学习小组5个人，每一个人有自己的名字。要将5个人的名字存储起来。
 1）、声明5个字符数组或字符指针来存储名字
 
 2）、使用二维的字符数组
    缺点：每1个字符串的长度不能超过 列-1。
 
 3）、使用字符指针数组
     字符串数据存储在常量区。
     元素中存储的是 字符串在常量区的地址。
     优点：每1个字符串的长度不限制。
 
 */
