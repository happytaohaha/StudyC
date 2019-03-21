#include <stdio.h>  //标准输入输出
#include <math.h>

//先需要定义函数 定义必须放到最前面
int f(int a, int b);

int main() {


    int i = 2, p;
    //这里 自右向左调用
    p = f(i, ++i);
    printf("%d\n", p);
    return 0;
}

int f(int a, int b){
    int c;
    if( a > b){
        c = 1;
    }else if( a == b){
        c = 0;
    }else{
        c = -1;
    }
    return c;
}
