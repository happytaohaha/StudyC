#include <stdio.h>  //标准输入输出
#include <math.h>
//数组Fibonacci数列
int main() {
    //初始化 如果只赋值前两个  后面的会自动赋值为0
    // 而  如果只声明  其中的数是随机的
    int a[20] = {1,1};
    for(int i = 2; i < 20; i++) {
        a[i] = a[i-1]+a[i-2];
    }
    for(int i = 0; i < 20; i++) {
        //一般把 常数放前面
        if(0==i%5){
            printf("\n");
        }
        printf("a[%d]= %d\t", i, a[i]);
    }
    return 0;
}
