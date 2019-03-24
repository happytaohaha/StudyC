#include <stdio.h>
//结构体嵌套
struct date{
    int month;
    int day;
    int year;
} birthday;
//这两个birthday 不是一个 birthday
struct {
    int num;
    char sex;
    int age;
}student1,student2;
//结构体的引用
int main(int argc, char *argv[]){
    /**
     * 结构体与数组的区别   结构体需要加取地址符才得到地址   数组不需要 直接就是地址 （这点是由他们所存元素不同所决定的）
     *
     * 在取地址方面两者也有根本的不同，数组的数组名就代表首地址，依次+1，+2……就可以表示其他元素的地址，
     * 不需要使用取地址运算符&；而结构本身只是一系列不同类型元素的集合，本质上只是把很多类型的元素放在一起，
     * 以适应具体生产生活中数据单位（例如一个学生的成绩信息、商家的顾客信息等）的存储方式，所以取地址依然需要采
     * 用取地址运算。
     *
     *   两者的访问方式也不同，数组可以直接利用下标访问，而结构必须使用结构中成员的变量名。
     *   结构的定义一般放在主函数外面，这样其他函数就可以使用这种类型的结构定义具体的结构；而数组则由于定义和使用
     *   都较为简单，可以直接在需要使用的函数中定义即可。
     *   ---------------------
     *  作者：空天遮阳伞
     *   来源：CSDN
     *   原文：https://blog.csdn.net/zhanshen112/article/details/80429861
     *   版权声明：本文为博主原创文章，转载请附上博文链接！
     */
    student1.num = 007;
    student1.sex = 'm';
    student1.age = 001;
    student2 = student1;  //这两个不是一个对象
    //student1  =  student1.num    除非加 &地址符号

    printf("student1 :%d  %d  %c %o \n", student1.num, student1.age, student1.sex, &student1);
    printf("student2 :%d  %d  %c %o \n", student2.num, student2.age, student2.sex, &student2);
    int a[] ={1,2,3,4,5};
    printf("a[] = %o\n",a);
    return 0;
}

