#include <stdio.h>  //��׼�������
#include <math.h>
//����ָ��  ָ������ָ��  ��̬
/**
  * �����ڶ�̬�Ķ���
  */
int max(int x,int y){
    int z;
    if( x > y){
        z = x;
    }else{
        z = y;
    }
    return z;
};
int min(int x,int y){
    int z;
    if( x < y){
        z = x;
    }else{
        z = y;
    }
    return z;
};
/**
 * int (*p)()   ����ָ��  ָ������ָ��
 */
int process(int x ,int y, int (*p)(int a,int b)){
    return (*p)(x,y);
};
int main() {
    int a = 1,b = 2;
    int ma , mi;
    ma =process( a,b,max);
    mi =process( a,b,min);
    printf("max =%d",ma);
    printf("max =%d",mi);
    return 0;
};
/**  �ܽ�
 * ���䷽�������������  ��*p�� ����ָ��
 * ����ָ��  ָ������ָ��  int (* p) ();
 * ����ָ��    ָ�������ָ�� int  (*p)[4];
 * ָ������  ���ָ�������   int * p[4];
 */