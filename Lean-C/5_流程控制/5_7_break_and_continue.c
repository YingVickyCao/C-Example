// break and continue
#include <stdio.h>

int main(int argc, const char *argv[]) {
//int main_5_7(int argc, const char *argv[]) {
    
    // break
    {
        /**
         1
         2
         */
        int i = 1;
        while (1) {// 循环继续的条件
            if(i == 3){ // 循环结束的条件
                break;
            }
            printf("%d\n",i);
            i++;
        }
    }
    printf("\n");
    
    // continue
    {
        /**
         1
         2
         4
         5
         */
        int i = 0;
        while (i < 5) {// 循环继续的条件
            i++;
            if(i == 3){ // 循环结束的条件
                continue;;
            }
            printf("%d\n",i);
        }
    }
    
    return 0;
}

/**
 1 break：
 swith 中使用。
 在循环体立即结束当前循环结构。
 
 结束循环的方式：
 （1）循环条件为假
 （2）在循环体内部使用break结束
 
 2 continue
 1）continue只能使用在循环体中。如果遇到了循环体。
 2) 在循环体中，如果遇到了continue，会立即结束本次循环，然后会去判断循环条件/
 */
