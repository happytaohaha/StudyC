#include<stdio.h>
/** int 4�ֽ� �з����� +2��30�η�-1      -2��30�η�         unsigned int 2��31�η� - 1
 *  1.�Ǹ�������    0  ������
 *
 */
 //1022 D���Ƶ�A+B
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

