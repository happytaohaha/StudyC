#include<stdio.h>

//1008 ����Ԫ��ѭ����������
/**
 * 1.����һ����ƭ������Ϊ��������λ����ʵ��û��
 * 2.�ú� / �� %  ���ܺ�ǿ��
 */
int main()
{
    int n = 0, m = 0;
    int array[100]= {};
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    m =m % n;
    for(int i = 0; i < n; i++){
        if(0 == i){
            printf("%d",array[(n-m+i)%n]);
        }else{
            printf("% d",array[(n-m+i)%n]);
        }
    }
    return 0;
}

