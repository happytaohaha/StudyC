#include <stdio.h>//include  ͷ�ļ�  <> һ���Ǳ�׼ģ���е�
#include <math.h>
//sin����
int main() {
    //����pi   cospi  = -1    acos ��-1��  = pi
    const double pi = acos(-1.0);
    double x, r, s;
    //\n����   printf  ���һ�λ�
    printf("input number:\n");
    //%lf  ��ߵ�һ��������
    scanf("%lf",&x);
    //�Ƕ�ת����   Ҳ�����Ƕ���pi
    r = x * pi / 180;
    //����Ķ����û��Ƚ��м����
    s = sin(r);
    printf("sin of %lf is %lf\n",x,s);

    return 0;  //return  0  ���������صģ��������0  ���Ǵ����
}