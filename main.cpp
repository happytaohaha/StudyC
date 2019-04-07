#include<stdio.h>

int main()

{
    //浮点数、十六进制数字和p-(P-)记数法(C99)
    //X
    printf("%A\n",123);
    //x
    printf("%a\n",123);
    //输出对应的字符 1-->╔
    printf("%c\n",1);
    printf("%d\n",-1);
    //e
    printf("%e\n",1000);
    //E
    printf("%E\n",1000);
    //g  G 浮点数不显示无意义的0
    printf("%g\n",1000.00);
    printf("%G\n",1000.00);
    //i 有符号十进制整数 与 d 相同
    printf("%i\n",1000);
    //u 无符号十进制整数   4294966296
    printf("%u\n",-1000);
    printf("%u\n",1000);
    //x X  十六进制整数OF 0f(0F)
    printf("%x\n",-1000);
    printf("%X\n",1000);
    printf("%X\n",1000);
    int a =123;
    int * p;
    p = &a;
    // p 展示的是 p的地址   *p 展示的是内部的值  十六进制显示
    printf("%p\n",p);
    printf("%p\n",*p);

    char s[100] ="123\n  123";
    //string 碰到\0 就不会再往后输出
    printf("%s\n",s);
    printf("%s\n","123\0 456");

    //2. 标志
    //左对齐
    printf("%-20s\n",s);
    //右对齐
    printf("%+20s\n",s);
    //空格  空格：若符号为正，则显示空格，负则显示"-"  比如："% 6.2f"
    printf("% 6.2f\n",123.1);
    printf("% 6.2f\n",-123.1);
    //#：对c,s,d,u类无影响；对o类，在输出时加前缀o；对x类，在输出时加前缀0x；对e,g,f 类当结果有小数时才给出小数点。
    printf("%#o\n",16);
    printf("%#x\n",16);
    printf("%#e\n",16);
    printf("% #f\n",123.1);
    printf("% f\n",-123);
    return 0;
    /**
     * %d：按整型数据的实际长度输出。

    %md：m为指定的输出字段的宽度。如果数据的位数小于m，则左端补以空格，若大于m，则按实际位数输出。

    %ld：输出长整型数据。
     */
}

