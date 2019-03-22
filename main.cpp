#include <stdio.h>  //标准输入输出
#include <math.h>
//函数指针  指向函数的指针  多态
/**
  * 类似于多态的东西
  */
int max(int x,int y){
    int z;
    if( x > y){
        z = x;
    }else{
        z = y;
    }
    return z;
};
int min(int x,int y){
    int z;
    if( x < y){
        z = x;
    }else{
        z = y;
    }
    return z;
};
/**
 * int (*p)()   函数指针  指向函数的指针
 */
int process(int x ,int y, int (*p)(int a,int b)){
    return (*p)(x,y);
};
int main() {
    int a = 1,b = 2;
    int ma , mi;
    ma =process( a,b,max);
    mi =process( a,b,min);
    printf("max =%d",ma);
    printf("max =%d",mi);
    return 0;
};
/**  总结
 * 记忆方法放在里面就是  （*p） 就是指针
 * 函数指针  指向函数的指针  int (* p) ();
 * 数组指针    指向数组的指针 int  (*p)[4];
 * 指针数组  存放指针的数组   int * p[4];
 */