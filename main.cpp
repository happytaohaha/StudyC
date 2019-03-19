#include <stdio.h>  //标准输入输出
//字符char 的应用
int main() {
    /**
     *  字符常量 ''   字符串常量  " "
     */
    char a, b, c, d, e, f;
    // ascill码所对应的 值  120 对应 x   121 =  y
    a = 120;
    b = 121;
    //单引号括字符
    c = 'x';
    d = 'y';
    printf("a=%d,a=%c\n",a,a);
    printf("b=%d,b=%c\n",b,b);
    printf("c=%d,c=%c\n",c,c);
    printf("d=%d,d=%c\n",d,d);
    //小写变大写    小写 -32
    e = a - 32;
    f = b - 32;
    printf("e=%d,e=%c\n",e,e);
    printf("f=%d,f=%c\n",f,f);







    return 0;
}
