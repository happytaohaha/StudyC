#include <stdio.h>  //标准输入输出
#include <math.h>
//c中指针++问题
int main() {
    int *p, i, a[10];
    p = a;
    for(i = 0; i < 10; i++){

        //scanf("%d", p++);  //这样错误的原因是 一直p++ p的地址被增加了  p增加后变成了下一个  跟++有关
        scanf("%d", p+i);
//        p--;
//        printf("%d",*p);

    }
    printf("\n");
    //p = p-10;
    for(i = 0; i < 10; i++, p++){
        printf("%d",*p);
    }
    /**   总结
     *     1. 解决方案1  用 p+i  不变指针
     *      2. 把p 调回去
     *      推荐第一种
     */

    return 0;
};
