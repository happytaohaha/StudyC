#include<stdio.h>
#include <math.h>
/**
 * �ѵ� ��Ҫ ����ǰ10000��������������С����һ��һ����
 * ��ʽ ����һ��ʼ������
 *
 */
//1013 ������
int isPrime(int x){
    int flag = 1;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i == 0)
        {
            flag=0;
        }
    }
    return flag;
}
int main() {
    int a[10000];
    //��Ϊ10000 �Ƚ�С��������ĳ���
    //1.���ҳ�10000������������
    a[0] = 2;
    int j =1;
    for(int i = 3; j < 10000; i++){//��Ϊǰ10000������
        if(isPrime(i)){
            a[j] = i;
            j++;
        }
    }
    //2.����ʽ���
    int m, n;
    int k = 1;
    scanf("%d %d", &m, &n);
    for(int i = m; i <= n; i++){
        if(k %10 != 0 && i != n){
           printf("%d ",a[i-1]);
        }else if(k % 10 == 0){
            printf("%d\n",a[i-1]);
        }
        else{
            printf("%d",a[i-1]);
        }
        k++;
    }


    return 0;
}
