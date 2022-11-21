// 带多个参数的函数
#include <stdio.h>

// 不指定参数的类型
void test_non_param_int(num) {
}

int sum2(int num1, int num2) {
    return num1 + num2;
}

int main(int argc, const char *argv[]) {
//int main_6_3(int argc, const char *argv[]) {
    test_non_param_int(3);
    printf("%d\n", sum2(3, 5));
    return 0;
}

/**
 1、在声明参数的时候，如果不指定参数的类型，直接参数的名字，那么默认的类型是int类型。
    虽然可以，但是不建议这么做。因为不友好。

 2、函数可以带多个参数？
    可以。
 */
