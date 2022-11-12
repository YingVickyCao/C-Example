#include <stdio.h>

/**
 scanf 的缓冲区
 1 在执行scanf之后，会让输入1个数据。
 在数据输入完毕之后，并不是价格数据直接赋值给变量。
 而是先将数据存储在缓冲区当中。
 
 2 在执行scanf函数的时候，会先检查缓冲区中是否有数据。
 如果缓冲区中没有数据，那么就会让用户从键盘输入。
 如果缓冲区中有数据，直接从缓冲区中将数据拿出球，不会让用户输入数据。
 
 3 当从缓冲区拿数据时，如果要拿的数据类型是整型或浮点型。如果拿到的是空格、回车、tab键，就会被自动忽略，继续往下拿。
 如果要拿的字符型，不会忽略任何数据。 所以，当我们数字和字符混合输入的时候，字符的接收就可能会出问题。
 
 解决方法：在输入字符之前，将缓冲区的数据全部清空。
 rewind(stdin);

 */
int main(int argc, const char *argv[]) {
//int main_scanf_buffer_area(int argc, const char *argv[]) {
    {
        /**
         Pease input num1:10 20
         num1 is 10
         Pease input num2:num2 is 20
         Program ended with exit code: 0
         */
        int num1 = 0;
        printf("Pease input num1:");
        scanf("%d", &num1);
        printf("num1 is %d\n",num1);

        int num2 = 0;
        printf("Pease input num2:");
        scanf("%d", &num2);
        printf("num2 is %d\n",num2);
    }
    

    {
        /**
         Pease input num1:10
         num is 10
         Pease input a char:ch is
         Program ended with exit code: 0
         */
        int num1 = 0;
        printf("Pease input num1:");
        scanf("%d", &num1);
        printf("num is %d\n",num1);

        char ch = 'a';
        printf("Pease input a char:");
        scanf("%c", &ch);
        printf("ch is %c",ch);
    }
    
    {
        /**
         Pease input num1:10
         num is 10
         Pease input a char:b
         ch is bProgram ended with exit code: 0
         */
        int num1 = 0;
        printf("Pease input num1:");
        scanf("%d", &num1);
        printf("num is %d\n",num1);

        rewind(stdin); // 将缓冲区的数据全部清空
        char ch = 'a';
        printf("Pease input a char:");
        scanf("%c", &ch);
        printf("ch is %c",ch);
    }
}
