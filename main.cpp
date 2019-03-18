#include <stdio.h>  //标准输入输出
//整形的数据溢出
int main() {

    int a, b;
    a = 32767;
    b = a + 1;
    //这个可以是因为a b 是4个字节  32位  范围大。
    printf("a=%d,b=%d\n",a,b);

    short int c, d;
    c = 32767;
    d = c + 1;
    //这个可以是因为c d 是2个字节  16位  范围小， 所以错误。
    printf("c=%d,d=%d\n",c,d);
/**
 * 输出结果
 * a=32767,b=32768
   c=32767,d=-32768
 */
    return 0;
}
