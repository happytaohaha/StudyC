#include <stdio.h>  //标准输入输出
#include <math.h>
//冒泡排序
int main() {
    int a[10];

    //输入模块
    printf("请输入10个数字:\n");
    for(int i = 0; i<10; i++){
        //这个如果打空格一直输入也可以   它会自动把输入的放进去， 超出的扔掉
        scanf("%d", &a[i]);
    }

    //冒泡排序模块
    //外层只需要 9个数 内层  最大9个数
    int temp;
    for(int i = 0; i<9; i++){
        for(int j = i+1;j<10;j++){
            if(a[i]>a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    //输出模块
    for(int i = 0; i<10; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
