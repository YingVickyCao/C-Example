// 字符数组

#include <stdio.h>
#include <string.h>

//int main(int argc, const char *argv[]) {
int main_9_8(int argc, const char *argv[]) {
    
    // 1、字符数组
    {
        char chars[4];
        chars[0]='a';
        chars[1]='b';
        chars[2]='c';
        chars[3]='d';

        for (int i = 0; i<4;i++) {
            printf("%c  ",chars[i]);
        }
        printf("\n");

        char chars2[4] = {10};
        
    }
    
    // 2、字符串
    {
        // 如何存储字符串
        {
            char hi[]={'h', 'e', 'l', 'l', 'o','\0'};
            char hi2[]={"hello"};
            char hi3[]="hello";

            printf("%d\n",sizeof(hi)/sizeof(char)); // 6
            printf("%d\n",sizeof(hi2)/sizeof(char));// 6
            printf("%d\n",sizeof(hi3)/sizeof(char));// 6

            char hi4[10]="hello";
            printf("%d\n",sizeof(hi4)/sizeof(char));// 10

            char hi5[2]="hello";
            printf("%d\n",sizeof(hi5)/sizeof(char));// 2

            char hi6[]="你好";
            printf("%d\n",sizeof(hi6)/sizeof(char));// 7
        }
        
        // 如何打印字符串
        {
            char hi[]={"hello"};
            for (int i = 0; i<4;i++) {
                printf("%c  ",hi[i]);
            }
            printf("\n");
            printf("%s\n",hi);
            
            // 面试题:
            {
                char str1[]="cherry";
                char str2[3]="ibc";
                printf("%s\n",str2); // ibccherry
            }
            {
                char str1[]={'c','h','e','r','r','y','\0'};
                char str2[]={'i','b','\0','s','e'};
                printf("%s\n",str2); // ib
            }
            {
                char str1[]={'c','h','e','r','r','y','\0'};
                char str2[]={'i','b','\0','s','e','\0'};
                printf("%s\n",str2); // ib
            }
            {
                char str1[]={'c','h','e','r','r','y','\0'};
                char str2[]={'i','b','c','\0'};
                printf("%s\n",str2); // ibc
            }

            {
                char str1[]={'c','h','e','r','r','y','\0'};
                char str2[]={'i','b','c'};
                printf("%s\n",str2); // ibccherry
            }
            
            {
                char str1[]={'m','\0','x','\0'};
                char test[]={'i','b','c'};
                printf("%s\n",test); // ibcm
            }

            {
                char str1[]={'m','\0','x','\0'};
                char test[2]={'i','b','c'}; // 存不下去，c被丢掉。
                printf("%s\n",test); // ibm
            }
            
            {
                char name1[]="jack";
                char name2[3]="rose";
                puts(name2);// rosjack
                
                name2[3]='X';
                puts(name1);// Xack
            }
        }
        
        // 6、如何接收用户从控制台输入一个字符串？
        {
            /**
                case 1 : hecg134p
                ok
                
                case 2 : agahahkjhioahl;ajhkpajplhjaophah
                ERROR : Thread 1: signal SIGABRT
             
                case 3 : helllo wrold
                hello
             */
            char str[10];
            printf("what is your name :");
            scanf("%s",str);

            printf("Welcome : %s\n",str);
        }
        
        // 7、字符串数组中存储的字符串的长度是多少？
        {
            {
                char name[]="1234";
                int lengh = sizeof(name); // 5
                printf("%d\n",lengh);
            }
            {
                char name[100]="1234";
                int lengh = sizeof(name); // 100
                printf("%d\n",lengh);
            }

            {
                char name[100]="1234";
                int len = 0;
                while (name[len]!= '\0' && len<100) {
                    len++;
                }
                printf("%d\n",len); // 4
            }

            {
                // Warning:Initializer-string for char array is too long
                char name[2]="1234";
                int len = 0;
                while (name[len]!= '\0' && len<2) {
                    len++;
                }
                printf("%d\n",len); // 2
            }
        }
        
        // 8、字符串的常用函数
        {
            // puts
            {
                char name[]="1234";
                puts(name); // 1234

                char name2[2]="1234";
                puts(name2); // 121234
            }
            
            // gets
            {
                /**
                 Case 1 : he
                 he
                 case 2 : agahahkjhioahl;ajhkpajplhjaophah
                 ERROR : Thread 1: signal SIGABRT
                 */
                char name[10];
                // Warning: 'gets' is deprecated: This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of gets(3), it is highly recommended that you use fgets(3) instead.
                // Console : warning: this program uses gets(), which is unsafe.
                gets(name);
                puts(name); // 2
            }
            
            //strlen
            {
                char name[]="1234";
                // Warning：Format specifies type 'int' but the argument has type 'unsigned long'
                printf("%d\n",strlen(name));
                printf("%lu\n",strlen(name)); // 4

                char name2[2]="1234";   // 6
                printf("%lu\n",strlen(name2));
            }
            
            // strcmp
            {
                {
                    char name1[]="jack";
                    char name2[]="jKmk";
                    printf("%d\n",strcmp(name1,name2)); // 22, name1 大
                }
                {
                    char name1[]="jack";
                    char name2[]="jacx";
                    printf("%d\n",strcmp(name1,name2)); // -13, name2 大
                }
                {
                    char name1[]="jacx";
                    char name2[]="jacx";
                    printf("%d\n",strcmp(name1,name2)); // 0, 一样大
                }
            }
            
            // strcpy
            {
                {
                    char name1[]="smith";
                    char name2[]="jack";
                    strcpy(name1, name2);
                    puts(name1);// jack
                }
                {
                
                    char name1[]="st";
                    char name2[]="jack";
//                    strcpy(name1, name2);// name1长度不够，无法存储name2，这时程序运行崩溃。
                    puts(name1);
            
                }
            }
            
            // strcat
            {
                {
                    char name1[12]="st";
                    char name2[]="jack";
                    strcat(name1, name2);
                    puts(name1); // stjack
                }
                {
                    char name1[3]="sm";
                    char name2[]="jack";
//                    strcat(name1, name2);// // name1长度不够，无法存储name2，这时程序运行崩溃。
                    puts(name2);
                }
            }
        }
    }
    return 0;
}
/**
 1、字符数组
   1）、字符数组的每一个元素本质上仍然是一个char变量。字符数组的元素仍然不能存储中文。
   2）、字符数组的默认值。
    声明字符数组后，不给元素赋值。那么，字符数组的元素是有值的，值是1个垃圾值。
 
    声明字符数组时，如果初始化了部分元素，那么其他的字符会被初始化为   '\0’
    '\0’ 是1个字符，是1个不可见的字符，打印出来什么都没有。
    '\0’ 字符的ASCII码是0
 
 2、目前学习的数据类型：int /double / float / char
    实际上，目前为止，还有一种数据无法存储。
    姓名：hello  => "hello"
    账号：123bjg => "123bjg"
 
    像这样的数据叫做，字符串。C中，字符串是""
 
 
    如何存储字符串数据？
    用字符数组来存储。'h', 'e', 'l', 'l', 'o'
    
 3、C中如何存储字符数据？
    1）、原理：将字符串的每1个字符存储到字符数据中，并在追加'\0'
    2）、如何存储字符串？
 
        a、最根本的方式：
        char names[6]={'h', 'e', 'l', 'l', 'o','\0'};
        字符串的每1个字符存储到字符数组中，并在最后加'\0'.
 
        b、简写方式
        char name[]={"hello};
        系统自动会将这个字符串的每一个字符存储到字符数组中，并自动追加'\0'
 
        c、最常用的方式
        char name[] = "jack";
        系统自动会将这个字符串的每一个字符存储到字符数组中，并自动追加'\0'
 
   3）、无论哪一种方式，原理都是一样的：都是以字符数组的形式来存储的。
   将字符串的每一个字符存储到字符数组中，并追加'\0'表示结束。
 
 4、使用注意
    1）、使用字符数组来存储字符串数据时，没有指定这个字符数组的长度，那么这个字符数组的长度为：字符串的长度+1.
        char hi2[]={"hello"};  => 6
 
    2）、使用字符数组来存储字符串数据时，指定了这个字符数组的长度，那么这个字符数组的长度为：指定长度。
        char hi4[10]="hello"; => 10
    3)、使用字符数组来存储字符串数据时，如果指定了字符数组的长度小于或等于字符串的长度，那么问题来了：存储不下。
        char hi5[2]="hello"; =>2
 
    4）、所以：使用字符数组来存储字符串数据时，不要指定字符数组的长度，让它自己算。
 
    5）、如果声明1个字符数组并同时初始化这个数组时，可以用中文。
        char hi6[]="你好"; => 7
        1个中文占据3个字符。
 
5、如何打印字符串
  方法1: 遍历字符数组
  
  方法2: %s
  原理：从给定的数组的地址开始，1个字节一个字节的输出，直到遇到 '\0' 为止。
 
 6、如何接收用户从控制台输入一个字符串？
     char str[10];
     scanf("%s",str); hecg134p
     
     不需要加取地址符，因为数组名就是地址。
 
    注意：
     1)、如果输入的字符串超出数组的长度，存储不下去，程序运行会报错。
     char str[10];
     scanf("%s",str); agahahkjhioahl;ajhkpajplhjaophah
     
     Error : ERROR : Thread 1: signal SIGABRT

     2）、输入的字符串时，如果有输入了空格，那么就会认为输入结束
     char str[10];
     scanf("%s",str); helllo wrold
     
     hello
 
 
    总结：scanf %s 不安全
     a、字符存储不了就报错。
     b、空格会认为结束
     
     没有办法解决。
 
 7、字符串数组中存储的字符串的长度是多少？
    方法1: 不可行。
    不能使用sizeoof（字符数组）的长度-1，来得到字符串的长度。
    因为可能字符串数据存储在字符数组中占了一部分。
     
    方法2:正确的方式
    遍历数组，直到遇到 '\0‘。如果在最后还是没有遇到 '\0‘，也要结束。
 
 8、字符串的常用函数
    1）、puts() 函数 ：
    用来输出字符串
 
    puts(存储字符串的字符数组)
    优点：输入完毕后，自动换行
    缺点：只能说出字符串，也不能使用占位符。
 
    2）、gets() 函数
    从控制台接收用户输入的1个字符串。
 
    gets(存储字符串的字符数组)
    优点：当用户输入的数据包含空格的时候，它会连空格一起接收。
    缺点：不安全。
    如果输入的字符串超出数组的长度，存储不下去，程序运行会报错。
     char str[10];
     gets(str); agahahkjhioahl;ajhkpajplhjaophah
     Error : ERROR : Thread 1: signal SIGABRT
 
 -----------------------------------------------------------------------------
   下面4个函数，是声明在string.h头文件中
    3)、strlen 函数
    得到字符串的长度
    long = strlen(字符数组)
 
    4）、strcmp 函数
    cmp -> compare
    比较两个字符串的大小
    int = strcmp(name1,name2)
    
    返回负数，说明字符串1比字符串2小。
    返回正数，说明字符串1比字符串2大。
    返回0，说明字符串1比字符串一样。
 
    比较规则：相同位置的字符的ASCII码的大小
 
    5）、strcpy() 函数
    将存储在字符数组中的字符串数据拷贝到另一个字符数组中存储。
 
    strcpy(target, src);
    
    可能的问题：
    name1长度不够，无法存储name2，这时程序运行崩溃。
 
    6）、strcat：
    cat --- concat
    连接
 
    strcat(name1, name2)
 
    可能的问题：
    name1长度不够，无法存储name2，这时程序运行崩溃。
 
    除了strlen()，其他用的并不多。
 
    总结：上面的函数，包括printf，当一个字符数组并没有\0,实际上并不是一个字符串。但是这些函数并没有做判断，仍然会继续函数处理。
 **/
