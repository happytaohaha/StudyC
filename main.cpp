#include <stdio.h>//include  头文件  <> 一般是标准模板中的  去系统中去寻找
#include <math.h>
//宏定义常量
#define PRICE 30
int main() {

    int num , total;
    num = 10;
    total = num * PRICE;
    //%d  是整数
    printf("total=%d\n",total);

    return 0;
}
//undef  需要带上定义的是什么东西  符号常量
#undef PRICE