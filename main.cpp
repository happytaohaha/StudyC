#include <stdio.h>
#include <cstring>
#include <cstdlib>

//typedef  定义别名  DATE
typedef struct Date
{
    int month;
    int day;
    int year;
} DATE;
/**
 *  typedef 与 #define 的区别
 *  #define  是在预编译的时候进行的字符替换
 *  typedef 在编译进行的解析
 */
typedef int NUM[100];

//typedef定义 类型  P 就是指向 char 的指针
// 数组和char * 不同点是
// 数组是把偏移量一点一点写入数组 数组在栈中
// 而对于char * 而言  字符串在常量区 char * 只保存第一个地址
typedef char *P;

//POINTER  返回void值的函数指针  有点像句柄
typedef void (*POINTER)();
void fun(){
    printf("I love Fishc.com");
}

int main(int argc, char *argv[]){
    DATE date_one;
    Date date_two;
    date_one.year = 2019;
    date_one.month = 3;
    date_one.day = 27;
    date_two =date_one;
    printf("%d - %d - %d\n",date_two.year,date_two.month,date_two.day);
    NUM num;
    printf("%d\n ", sizeof(num));  //int[100] 的长度

    P p1;
    p1 = "I love Fishc.com";
    printf("%s\n",p1);

    POINTER pointer;
    pointer =&fun;  //或者 pointer = fun
    //执行
    (pointer)();
    return 0;
}

