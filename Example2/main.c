// 1 XCode
// (1) 点击运行按钮，XCode自动帮我们编译-链接-执行
// (2) 实时检测语法错误
// (3) 关键字自动着色，不同颜色表示不同的含义。
// (4) 代码自动缩进
// (5) 代码自动提示

// 2 XCode编译之后，生成的可执行文件在哪里？Products -> 右键 -> Show in Finder
#include "stdio.h"

// 3 main() 有没有参数都不影响

// 4 CPU 从哪个地方开始执行代码？
// （1）不是从上到下执行，而是CPU只执行main函数中的代码,别的代码是不会执行的。
// （2）1个标准的C程序中有且只有1个main函数
// （3）代码想要被CPU执行，必须写在main函数中。
// （4）CPU在main函数中执行时，是从上到下一句一句执行的。只有在上1句执行完毕后，才会执行下一句。

// 5 程序一开始的时候就会执行main函数，所以，main函数是程序的入口
//   当main函数的代码执行完毕之后，程序就会自动结束。所以，main函数也是程序的出口。

void print(){
    printf("Test");
}

int main(){
//int main(int argc, const char* argv[]){
    printf("Hello World\n");
    printf("ABC");
    return 0;
}
