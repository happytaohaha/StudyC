#include <stdio.h>//include  ͷ�ļ�  <> һ���Ǳ�׼ģ���е�  ȥϵͳ��ȥѰ��
#include <math.h>
//�궨�峣��
#define PRICE 30
int main() {

    int num , total;
    num = 10;
    total = num * PRICE;
    //%d  ������
    printf("total=%d\n",total);

    return 0;
}
//undef  ��Ҫ���϶������ʲô����  ���ų���
#undef PRICE