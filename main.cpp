#include<stdio.h>
/** int 4字节 有符号数 +2的30次方-1      -2的30次方         unsigned int 2的31次方 - 1
 *  1.非负整数：    0  正整数
 *
 */
 //1022 D进制的A+B
int main(){
    unsigned int A,B,D;
    int res[31]={};
    scanf("%d %d %d", &A, &B, &D);
    unsigned int C = A + B;
    int i = 0;
    if(C == 0){
        printf("%d", 0);
    }else{
        for(; C != 0;i++){
            res[i] =C%D;
            C = C / D;
        }
        i--;
        for (; i >= 0 ; --i) {
            printf("%d", res[i]);
        }
    }
    return 0;
}

