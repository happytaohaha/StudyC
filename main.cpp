#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <math.h>

//1063
//C语言控制输出格式  %.2lf
int main(int argc, char *argv[]){
    int a = 0;
    int b = 0, c = 0;
    double max = 0;
    scanf("%d",&a);
    while(a){
        double temp;
        scanf("%d %d", &b, &c);
        temp =sqrt(b*b+c*c);
        if(temp > max){
            max = temp;
        }
        a--;
    }
    printf("%.2lf",max);
    return 0;
}

