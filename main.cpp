#include <stdio.h>  //��׼�������
#include <math.h>
//����Fibonacci����
int main() {
    //��ʼ�� ���ֻ��ֵǰ����  ����Ļ��Զ���ֵΪ0
    // ��  ���ֻ����  ���е����������
    int a[20] = {1,1};
    for(int i = 2; i < 20; i++) {
        a[i] = a[i-1]+a[i-2];
    }
    for(int i = 0; i < 20; i++) {
        //һ��� ������ǰ��
        if(0==i%5){
            printf("\n");
        }
        printf("a[%d]= %d\t", i, a[i]);
    }
    return 0;
}
