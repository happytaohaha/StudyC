#include <stdio.h>
#include <math.h>
int main() {
    //把三个系数保存到计算机中
    int a = 1;
    int b = 5;
    int c = 6;
    double delta;//delta  = b*b -4*a*c
    double x1;
    double x2;
    delta = b*b - 4*a*c;
    if(delta>0){//两个解
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("该一元二次方程有两个解，x1 =%f,x2 =%f\n",x1,x2);
    }else if(delta == 0){//一个解
        x1=(-b)/(2*a);
        x2=(-b)/(2*a);
        printf("该一元二次方程有一个解，x1 =%f,x2 =%f\n",x1,x2);
    }else{//无解
        printf("该一元二次方程有无解");
    }

    return 0;
}