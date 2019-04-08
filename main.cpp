#include<stdio.h>

/**
 *  非常简单的一个每一位识别
 *  用好 %10  /10
 */
//1006 换个格式输出整数
int main()
{
    int a = 0;
    scanf("%d", &a);
    int b = 0;
    int s = 0;
    int d = 0;
    d = a % 10;
    a = a / 10;
    s = a % 10;
    b = a / 10;
    while(b > 0){
        printf("%c",'B');
        b--;
    }
    while(s > 0){
        printf("%c",'S');
        s--;
    }
    for(int i = 1; i <= d; i++){
        printf("%d", i);
    }

    return 0;
}

