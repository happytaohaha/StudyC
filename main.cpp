#include <stdio.h>  //标准输入输出
//scanf使用注意事项
int main() {

    int a , b, c;
    printf("input  a, b, c\n");
    // 这里只能用&a, &b, &c   表示给他的地址赋值
    scanf("%d%d%d", &a, &b, &c);
    //如果出现非法字符就会停止这次scanf  例： 12A  就会停止
    printf("a=%d, b=%d, c=%d", a, b, c);
    //* 表示跳过 这个输入
    scanf("%d%*d%d", &a, &b);
    printf("a=%d, b=%d", a, b);
    //为输入加长度
    scanf("%4d%4d%4d", &a, &b, &c);

    //char 输入
    char  e, d, f;
    //会把空格也会当作一个输入的内容
    scanf("%c%c%c\n", &e, &d, &f);
    printf("e=%c, d=%c, f=%c", e, d, f);
    //每输入一个字符必须加空格  而int 没有这样的事情
    scanf("%c %c %c\n", &e, &d, &f);
    printf("e=%c, d=%c, f=%c", e, d, f);
    //sizeof 返回类型所占的长度
    printf("sizeof(e)=%d",sizeof(e));


    /**
     * 题目输入三个小写字母，输出其ASCII码和对应的大写字母
     */
     char h, i, j;
     printf("input character h, i, j:");
     scanf("%c %c %c\n", &h, &i, &j);
     //输入字符可以直接%d 打印它ascii码
     printf("%d,%d,%d\n%c,%c,%c\n", a, b, c, a-32, b-32, c-32);
    return 0;
}
