#include <stdio.h>
#include <math.h>
int main() {
    //������ϵ�����浽�������
    int a = 1;
    int b = 5;
    int c = 6;
    double delta;//delta  = b*b -4*a*c
    double x1;
    double x2;
    delta = b*b - 4*a*c;
    if(delta>0){//������
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("��һԪ���η����������⣬x1 =%f,x2 =%f\n",x1,x2);
    }else if(delta == 0){//һ����
        x1=(-b)/(2*a);
        x2=(-b)/(2*a);
        printf("��һԪ���η�����һ���⣬x1 =%f,x2 =%f\n",x1,x2);
    }else{//�޽�
        printf("��һԪ���η������޽�");
    }

    return 0;
}