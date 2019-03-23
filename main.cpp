#include <stdio.h>
//引用传递和地址传递值传递
void swap1(int* a,int* b);
void swap2(int& a,int& b);
void swap3(int* a,int* b);
/**
 * 引用传递 和 地址传递 对于地址均没有影响
 * 地址传递   int *a = &b;   参数传递规则
 * 引用传递   int &a = b;  这里的b就是值  而 &a 是它的别名  所以b不需要去取地址
 * 引用int & b = a;   b 是a 的引用   b 和  a 指向同一个位置  地址相等
 * 所以引用并不是一种数据类型，内存并不会给它单独分配内存，而是直接调用它所引用的变量。
 */
int main(){
    printf("Hello World!\n");
    int a = 3;
    int b = 4;
    printf("bef swap, add of a = %d\n",&a);
    printf("aft swap, val of a = %d\n",a);
    printf("bef swap, add of b = %d\n",&b);
    printf("aft swap, val of b = %d\n",b);
    //swap(a,b);
    //swap1(&a,&b);
    swap2(a,b);
    //swap3(&a,&b);

    printf("bef swap, add of a = %d\n",&a);
    printf("aft swap, val of a = %d\n",a);
    printf("bef swap, add of b = %d\n",&b);
    printf("aft swap, val of b = %d\n",b);
    return 0;
}
// pass by value
//新开辟内存空间在新内存上操作，因此没有影响
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}
// pass by address
//地址传递  传入的是地址，然后对于地址进行取值和赋值所以相应的值发生了改变但地址没有改变
//简单理解 传来的是地址  然后对于地址内部的东西进行交换，所以 操作的东西没有产生新内存 所以会对外产生影响
void swap1(int* a,int* b){
    int temp = *a;//取出地址a的值，并赋值给整型变量temp
    *a = *b;//取出地址b的值，并将这个值赋给地址a指向的值
    *b = temp;//将temp的值赋给地址b所指向的值
}
// pass by reference
//引用传递  &a  =x;  操作 a 就是操作x；
void swap2(int& a,int& b){
    int temp = a;
    a = b;
    b = temp;
}
// pass by value ?
//相当于值交换   虽然传来的是地址    而使用int* 中间内容  进行的交换式在中间副本上所以没有变换
//我认为swap3是一种值传递，如果我们把int*完全当做跟int一个级别的数据类型，那么swap3和swap两个函数是一摸一样的。只不过后者传入的是变量a，b的拷贝值，而后者传入的是变量a，b的地址的拷贝值；前者不能反应在外部，后者也不能。
void swap3(int* a,int *b){
    int* temp = a;
    a = b;
    b = temp;
}

/**
 * 具体详情参考这个链接
 * https://www.cnblogs.com/chen-kh/p/6696305.html
 */

