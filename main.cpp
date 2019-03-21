#include <stdio.h>  //标准输入输出
#include <math.h>
//指针的地址传递和引用传递再探究与数组结合

//注释
//数组不是c语言中的基本数据类型，所以不能返回数组，只能返回一个指向数组的指针
// 因为数组的内存开辟在堆上，所以子函数结束后并不会被释放，子函数只需要将指针返回给主函数，主函数可随时访问。
int* Array()
{
    int *a;
    a=new int [10];
    for(int i=0;i<10;i++)
    {
        a[i]=i+1;
    }
    return a;
}

/**
 * 1. 引用传递提高效率
使用引用型变量，子函数调用会直接对主函数中的变量做加法，不会为形参x y开辟内存，执行效率变高。
用了引用变量后，就不再为形参开辟内存，所有操作都是直接修改实参变量。
 */
int add(int x,int y)
{
    return x+y;
}
int add1(int &x,int &y)
{
    return x+y;
}


/**
 * 2下面写一个调用排序的程序，当用数组名做实参时，相当于使用引用型变量，
因为数组名就表示数组首元素的地址，这和引用型变量与指针是一样的
 arr[]  相当于 参数为&arr    调用时为 sort(a)
 */
void sort(int arr[])
{
    int min=0;
    for(int i=0;i<9;i++)//10个数做9趟比较
    {
        min=i;//将min定义在循环外面，不然会在循环中重复定义（效率低）
        for(int j=i+1;j<10;j++)//for中的起始条件和结束条件其实定义在循环外面，只有j++是循环体中的内容（深刻理解for和while的关系，能掌握二者的转换）
        {
            if(arr[j]<arr[min])
                min=j;
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
/**
 * 地址传递的标准
 * *arr 传过来的是地址
 */
void sort2(int *arr)
{
    int min=0;
    for(int i=0;i<9;i++)//10个数做9趟比较
    {
        min=i;
        for(int j=i+1;j<10;j++)
        {
            //arr 是指针  arr+j  指针偏移  *(arr+j)  表示内部的值
            if(*(arr+j)<*(arr+min))//if(arr[j]<arr[min])
                min=j;
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

//地址传递  *p  *p1=4,*p2=6  但是那边写main方法里时用的是&a
//也不需要创建新的对象
//这里面操作的都是值
//总结这里的 int *p1  表示取值  所以传地址 取值所以以后操作值
void swap(int *p1,int *p2){
    printf("*p1=%d,*p2=%d。\n",*p1,*p2);
    //地址是数字
    int tmp=*p1;
    *p1=*p2;
    *p2=tmp;
};

//引用传递   &p1是 是地址   这里不会初始化一个新的对象，是一个对象   原则上是改变地址
//p1 p2  引用了 a  b
//同时可以看出来引用和地址传递可以重载
//就是因为传的地址，所以是一个对象 操作 p1 p2 就是操作 a b
//总结 这里&p1 取址  所以传递 a  这里取地址
void swap(int &p1,int &p2){
    //p1 里面放的是6  就是所对应的值
    printf("p1=%d,p2=%d。\n",p1,p2);
    int tmp=p1;
    p1=p2;
    p2=tmp;
};

//值传递   对于实参没有任何影响   这里的都是 new出来的
//关于值传递和地址传递有重载名相同的问题   应该都是传递到函数里的数一样所以会出错
void swap1(int p1,int p2){
    int tmp=p1;
    p1=p2;
    p2=tmp;
};

//地址传递现在C支持 引用传递C++ 支持
int main() {
    int a=4,b=6;
    printf("a=%d,b=%d。\n",a,b);
    printf("a=%d,b=%d。\n",&a,&b);
    //传递地址  &a,&b
    //传递地址  &a,&b
    swap(&a,&b);
    printf("a=%d,b=%d。\n",a,b);

    //这里调用的是swap(int &p1,int &p2)
    //并且注意这里是a b  他自己会取地址
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


/**
 * 总结
 * 只有在指针定义时   int *p1  这里*是声明p1是一个指针
 * 而在 参数 表达式中  * 代表取值 &代表取地址  * p1  表示取p1指针里放的地址的值
 *
 * 这里的 int *p1  表示取值  所以传地址 &a 取值所以以后操作值
 * p1 = &a;  再取值
 * void swap(int *p1,int *p2)
 *
 * 这里&p1 取址  所以传递 a  这里取地址
 * p1 =a;   再取地址
 * void swap(int &p1,int &p2)
 */

    return 0;
};
