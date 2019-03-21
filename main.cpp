#include <stdio.h>  //标准输入输出
#include <math.h>
//a[]  === *a
// *a 取值   a 为
/**
 * a[]  === *a
 * 探究
 * 1.   a[1] = 1 ;这'=' 是赋值号
 * 2.   a[1] =a[2] ;这个是--> 的意思   a[1]和a[2]指向同一个数
 * * a 同理
 * 因此解决 a[]  === *a 的原因    a 是地址  * ,[]  是 取值
 */
void converse(int a[],int len){
    int mid, i, j;
    mid = len / 2;
    for( i = 0; i < mid ; i++) {
        j = a[i];//将其中的值给j
        a[i] = a[len - 1 - i];// 将值赋给指针
        a[len - 1 - i] = j;//交换地址
    }
}
int main() {
    int a[11]={ 3, 7, 9, 11, 0, 6, 7, 5, 4, 2,11};
    //a就是地址
    converse(a,11);
    for(int i = 0; i < 11; i++){
        printf("%d ",a[i]);
    }
    return 0;
};

