#include <stdio.h>
#include <cstring>
#include <cstdlib>

//位运算
//大小写转换  A 65~90   a 65+32  97 ~122
int main(int argc, char *argv[]){
    char ch;

    printf("请输入一个字母\n");
    ch = getchar();
    while (!(ch >= 'A' && ch <= 'z')|| (ch > 'Z' && ch < 'a')){
        printf("输入错误请重新输入:\n");
        ch = getchar();
    }
    if(ch & 32){ //  00010000  与的话  判断 第五位是否为1
         ch = ch & 223;  //111   11011111
    }else {   //A - a
        ch = ch | 32;
    }
    printf("%c",ch);
    /**
     * a  = 3 ,b =4
     * 交换
     * a = a ^ b;  异或
     * b = b ^ a;
     * a = a ^ b;
     */


    return 0;
}

