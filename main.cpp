#include <stdio.h>
#include <cstring>
#include <cstdlib>

//移位运算符
int main(int argc, char *argv[]){
    int a = 2;
    int b = -2;
    unsigned int c = 2;
    unsigned  int d = 255;
    a = a >> 1;   //箭头指哪别往那边移动
    b = b >> 1;
    c = c >> 1;
    printf("%d\n",c);
    printf("%d\n",a);
    printf("%d\n",b);
    a = a << 1;
    b = b << 1;
    c = c << 1;
    printf("%d\n",c);
    printf("%d\n",a);
    printf("%d\n",b);

    //有算数移位 带符号   正数  左移 右边补0  负数 左移  补1
    // 逻辑移位不带符号   正数  左移 右边补0

    return 0;
}

