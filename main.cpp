#include <stdio.h>  //标准输入输出
#include <math.h>


//指针入门
int main() {
    /**
     * 指针声明是 *
     * 而 在运算中 * 取值   &取地址
     */
    //pointer 是一个指针  * 只是声明的时候说明他是指针
    int * pointer;
    int a =2000;
    //pointer指向了a所在的地址  int 和上面的指针int 值需要相同
    pointer = &a;
    //这里的* 是取值的意思 因此*pointer 取得是 pointer 指向的地址中的 a的值
    printf("a=%d",*pointer);
    return 0;
}

