// 面试题

#include <stdio.h>

//int main(int argc, const char *argv[]) {
int main_10_10(int argc, const char *argv[]) {
    
    // 1、有1个字符串 ： 123a3egteyt。 求这个字符串中'e'出现的次数。
    {
        {
            char* p = "123a3egteyt";
            int count = 0;
            
            int i = 0;
            while (*(p+i)!= '\0') {
                if(*(p+i)== 'e'){
                    count++;
                }
            }
            // 完全等价
    //        while (p[i]!= '\0') {
    //            if(p[i]== 'e'){
    //                count++;
    //            }
    //        }
            printf("%d\n",count);
        }
        
        {
            char* p = "jack";
            p = "123a3egteyt"; // ok
        }
    }
    return 0;
}


/**
 面试题
 
 1、有1个字符串 ： 123a3egteyt。 求这个字符串中'e'出现的次数。
 
    思路：遍历字符串，\0结束。
 
    以字符指针、字符数组 存储字符串数据优势：
    建议使用字符指针来存储字符串数据。
    以字符数组： 长度要固定。一旦创建以后，最多只能存储这么多长度的数据。
    以字符指针：长度任意。
 */

