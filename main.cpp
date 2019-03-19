#include <stdio.h>  //标准输入输出
//字符的基本运算
int main() {

    printf("\n \n%d,%d\n",20/7,-20/7);
    printf("%f,%f\n",20.0/7,-20.0/7);

    printf("%d\n",100%3);

    putchar('A');
    //可以直接打ASCII 码
    putchar(97-32);
    putchar('\n');
    //可以转意为A
    putchar('\101');
    putchar('\n');



    printf("========================\n");
    char a = 'B', b = 'o', c = 'k';
    putchar(a); putchar(b); putchar(b); putchar(c);putchar('\n');

    printf("========================\n");
    char d;
    printf("input a character \n");
    d = getchar();
    putchar(d);

    int e= 88, f = 89;
    printf("%d %d\n", e, f);
    printf("%d,%d\n", e, f);
    printf("%c,%c\n", e, f);
    printf("a=%d,b=%d\n", e, f);

    printf("========================\n");

    int g =15;
    float h =123.1234567;
    double i =12345678.1234567;
    char j ='p';
    printf("g=%d,%5d,%o,%x\n",g,g,g,g);
    printf("h=%f,%lf,%5.4lf,%e\n",h,h,h,h);
    printf("i=%lf,%f,%8.4lf\n",i,i,i);
    printf("j=%c,%8c\n",j,j);
    /**
     * float，单精度浮点型，对应%f.
     * double,双精度浮点型，对应%lf.
     * 在用于输出时:
     * float类型可以使用%lf格式，但不会有任何好处。
     * double类型如果使用了%f格式可能会导致输出错误。
     */
    /**
     * 输出 一共5个字符：空格+字符   17 8进制   f  16进制
     * g=15,   15,17,f
     *   有效位 7位  lf  没用  5.4f 整数5 位 .4  4位小数   e 科学计数法
     * h=123.123459,123.123459,123.1235,1.231235e+002
     *   lf  长精度   f  有可能出错    整数8位  1235 四位小数
     * i=12345678.123457,12345678.123457,12345678.1235
     * %8c 一共8个字符：空格+字符
     * j=p,       p
     */



    /**
     * 两者不同  计算顺序不同
     * 8       8       7       8       -7      -8
     * 9       8       8       9       -8      -9
     */
    int k =8,l =8;
    //从右往左计算
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",++k,k--,k++,k--,-k++,-k--);

    printf("%d\t",++l);
    printf("%d\t",--l);
    printf("%d\t",l++);
    printf("%d\t",l--);
    //直接进行-a 运算 不会有赋值语句  也就是不会更新l  所以  下一条是-9
    printf("%d\t",-l++);
    printf("%d\n",-l--);

    return 0;
}
