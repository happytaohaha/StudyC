#include <stdio.h>
#define PIN1 char*
typedef char* PIN2;
//define 与 typedef 的区别
/**
 * #define  不能加  ;   #define  直接替换   预编译
 * typedef 需要加 ;   typedef  变换类型    编译的时候
 */
int main(int argc, char *argv[]){
    PIN1 x, y;   // 替换过来就是  char * x, y;   y 的类型就是 char 类型
    PIN2 a, b;     //    char* x ,* y;
    //指针类型占四个字节
    printf("By #define: %d %d\n\n", sizeof(x), sizeof(y));
    printf("By typedef: %d %d\n\n", sizeof(a), sizeof(b));
    return 0;
}

