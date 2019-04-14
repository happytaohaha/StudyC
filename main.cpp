#include<stdio.h>
/**
 *  背包问题
 *  1. 全部用成double   double a[1000][3]
 *  2. 考虑特殊情况   不够需求的情况
 */
 //1020 月饼
int main(){
    int N;
    double D;
    double sum = 0;
    scanf("%d %lf", &N, &D);
    double a[1000][3] ={};
    for(int i = 0; i < N; i++){
        scanf("%lf", &a[i][0]);
    }
    for(int i = 0; i < N; i++){
        scanf("%lf", &a[i][1]);
        a[i][2] = a[i][1]/a[i][0];
    }
    double  temp = 0;
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            if(a[i][2]<a[j][2]){
                temp = a[j][2];
                a[j][2] = a[i][2];
                a[i][2] = temp;

                temp = a[j][1];
                a[j][1] =a[i][1];
                a[i][1] = temp;

                temp = a[j][0];
                a[j][0] =a[i][0];
                a[i][0] = temp;
            }
        }
    }
    for(int i=0; D >0 && i< N ;i++ ){
        if(D -(int)a[i][0] >= 0){
            D = D -(int)a[i][0];
            sum +=  a[i][1];
        }else{
            sum += D/a[i][0] * a[i][1];
            D = 0;
        }
    }
    printf("%.2f",sum);
    return 0;
}

