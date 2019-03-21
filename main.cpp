#include <stdio.h>  //标准输入输出
#include <math.h>
//指针的地址传递和引用传递

//地址传递  *p  表示取值  所以传过来的是地址
void swap(int *p1,int *p2){
    //地址是数字
    int tmp=*p1;
    *p1=*p2;
    *p2=tmp;
};

//引用传递   &p1是 是地址   这里不会初始化一个新的对象，是一个对象   原则上还是改变地址
//p1 p2  引用了 a  b
//同时可以看出来引用和地址传递可以重载
void swap(int &p1,int &p2){
    int tmp=p1;
    p1=p2;
    p2=tmp;
};

//值传递   对于实参没有任何影响   这里的都是 new出来的
void swap1(int p1,int p2){
    int tmp=p1;
    p1=p2;
    p2=tmp;
};

//地址传递现在C支持 引用传递C++ 支持
int main() {
    int a=4,b=6;
    printf("a=%d,b=%d。\n",a,b);

    //传递地址  &a,&b
    swap(&a,&b);
    printf("a=%d,b=%d。\n",a,b);

    //这里调用的是swap(int &p1,int &p2)
    //并且注意这里是a b
    swap(a,b);
    printf("a=%d,b=%d。\n",a,b);

    //值传递  对于实参没有影响
    swap1(a,b);
    printf("a=%d,b=%d。\n",a,b);
/** 输出
 * a=4,b=6。
 * a=6,b=4。
 * a=4,b=6。
 * a=4,b=6。
 */

    return 0;
};
