#include <stdio.h>
//main函数的研究
/**
 * main 函数有两个参数   int argc, char *argv[] 长度  和 输入的字符
 * 用途  可以用作服务器启动时的参数
 */
int main(int argc, char *argv[]){
    int i;
    printf("the number of string is : %d\n",argc-1);
    for (i = 0; i < argc; ++i) {
        printf("the string %d is : %s\n",i,argv[i]);
    }
    return 0;
}

