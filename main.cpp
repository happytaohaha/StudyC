#include <stdio.h>  //��׼�������
#include <math.h>
//ð������
int main() {
    int a[10];

    //����ģ��
    printf("������10������:\n");
    for(int i = 0; i<10; i++){
        //��������ո�һֱ����Ҳ����   �����Զ�������ķŽ�ȥ�� �������ӵ�
        scanf("%d", &a[i]);
    }

    //ð������ģ��
    //���ֻ��Ҫ 9���� �ڲ�  ���9����
    int temp;
    for(int i = 0; i<9; i++){
        for(int j = i+1;j<10;j++){
            if(a[i]>a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    //���ģ��
    for(int i = 0; i<10; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
