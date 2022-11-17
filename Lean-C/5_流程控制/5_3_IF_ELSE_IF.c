/**
 IF - ELSE - IF
 
 使用方法：
     依次按照顺序判断多个条件。 只要有1个成立，就要执行对应的代码，后面的就不要再判断了。
     只有前面的条件不成立时，才判断后面的条件。
     
 使用注意：
     （1）只要前面的条件成立，就会执行对应的代码。 执行完毕后，立即结束这个结构。
     哪怕后面的条件成立，也不会执行。
     （2）如果判断了后面的条件，说明前面的条件是不成立的。
     所以，后面的条件不用特别说明前面的条件不成立。
     （3）判断的顺序不能乱写。如果条件写的乱，那么条件要完整一些。
     一般，条件从大到小，条件的范围逐渐缩写。
     （4）else可以省略。如果省略，就没有默认执行代码了。
 */

#include <stdio.h>

//int main(int argc, const char *argv[]) {
int main_5_3(int argc, const char *argv[]) {
 
    int money = 300;
    
    if(money >= 500){
        printf("吃个大餐\n");
    }
    else if (money >= 400){
        printf("吃个中餐\n");
    }
    else if (money >= 300){
        printf("吃个小餐\n");// invoked
    }
    else if (money >= 200){
        printf("吃泡面\n");
    }
    else if (money >= 100){
        printf("喝杯饮料\n");
    }
    else {
        printf("打他\n");
    }
    return 0;
}
