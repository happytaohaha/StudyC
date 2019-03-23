#include <stdio.h>
//void 类型 void指针和const指针
/**
 * void的作用：
 * （1）对于函数返回的限定
 * （2）对于函数参数的限定
 * void abc（void）
 */
 /**void指针
  * void 指针类型 即 不指定它是指向哪一种类型数据的指针变量
  * 例如： void *p；
  * 表示指针变量p不指向一个确定的数据类型，他的作用只用来存放一个地址；
  * void 指针它可以指向任何类型数据。 也就是说，可以用任何类型的指针直接给void 指针赋值。
  * 但是，如果需要将void指针的值赋值给其他类型的指针，则需要进行强制类型转化
  */
  /**
   * const指针
   * 三个例子
   */
void fun1(){
          const char  *str ="Welcom to YTHAHAHA\n";
          printf("\n\n%s",str);
#if(0)

          str[0] ='w';  //这个是错误的，但是可以改变 *str  直接改变    const  加在了 char 上
#endif
          str = "I love ythahaha\n";
        printf("\n\n%s",str);
};
void fun2(){
     char * const str1 ="Welcom to YTHAHAHA\n";
    printf("\n\n%s",str1);

    str1[0] = 'w';
    printf("\n\n%s",str1);
#if(0)
    str1 = "I love ythahaha\n"; //这个是错误的，但是可以改变 每一个字符  直接改变     const  加在了 str 上
    printf("\n\n%s",str1);
#endif
};
void fun3(){
    const char * const str2 ="Welcom to YTHAHAHA\n";
    printf("\n\n%s",str2);
#if(0)
    str[0] ='w';
    str = "I love ythahaha\n";  //都不可以改变
    printf("\n\n%s",str);
#endif
};
int main(int argc, char *argv[]){
    //fun1();
    fun2();
    //fun3();
    return 0;
}

