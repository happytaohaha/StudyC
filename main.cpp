#include<stdio.h>
//
/**
 * scanf  是有返回值的
 * scanf("%d %d", &a, &b)
 * 如果a b被成功读入，返回值为2；
 * 如果只有a被成功读入，返回值为1；
 * 如果a和b都未被成功读入，返回值为0；
 * 读取错误返回的是 -1  EOF
 * 如果遇到错误或遇到end of file，返回值为EOF。end of file为Ctrl+z 或者Ctrl+d。
 */
 //1010 一元多项式求导
int main() {
    int a, b;

    int flag = 0;
    while(scanf("%d %d", &a, &b) == 2){
        if( b != 0){
            if(flag == 0){
                    printf("%d %d", a*b, b-1);
                    flag = 1;
            }else{
                    printf(" %d %d", a*b, b-1);
            }
        }
    }
     if(flag == 0)
         printf("0 0");
    return 0;
}
