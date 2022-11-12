#include <stdio.h>
/**
 交换两个变量的值
 */
//int main(int argc, const char* argv[]){
int main_variable_wap_value(int argc, const char* argv[]){
    
    // Way 1
    {
        int a = 10;
        int b = 20;
        
        int temp;
        
        temp= a;
        a = b;
        b = temp;
        
        printf("%d,%d\n",a,b);
    }
    
    // Way 2
    {
        int a = 10;
        int b = 20;
        
        a = a+b;
        b = a-b;
        a = a-b;
        
        printf("%d,%d\n",a,b);
    }
    
    // Way 3
    {
        int a = 10;
        int b = 20;
        
        a = a^b;
        b = a^b;
        a = a^b;
        
        printf("%d,%d\n",a,b);
    }
    return 0;
}
