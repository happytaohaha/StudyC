#include <stdio.h>
#include <cstring>
#include <cstdlib>

//循环移位
int main(int argc, char *argv[]){
    unsigned char a, b, c;
    int n;
    printf("请输入需要循环右移的数字：");
    scanf("%d", &a);
    printf("请输入需要右移动的位数:");  //原始数  00000011
    scanf("%d", &n);//1   00000001
    b = a <<(sizeof(char) *8 - n ); //7   移动完低位补  10000000
    c = a >>n;
    c = c | b;          //10000001
    printf("结果是: %c\n",c);
    return 0;
}

