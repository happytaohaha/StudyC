#include<stdio.h>
#include <math.h>

int isPrime(int i);
//������bool
//1007 �����Բ���
/**
 * 1.��������ķ���  i < sqrt(a)  Ȼ��  �Ƚ� a %i == 0
 * 2.���ںŵ�ʹ���Ƿ���ȷ
 * 3. PAT �����׼C û��bool
 * 4. ����ʹ��math.h
 */
int main()
{
    int a[10000] ={};
    int num = 0;
    scanf("%d",&num);
    int count = 0;
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    //�������±�
    int count1 = 2;
    //��һ�����ں���Ϊ�������һ����ҲΪ����
    for(int i = 3; i<= num; i++){
        if(isPrime(i)){
            count1++;
            a[count1] = i;
            if(a[count1] - a[count1-1]==2){
                count ++;
            }

        }
    }
    printf("%d", count);
    return 0;
}
//������<=
int isPrime(int i) {
    int flag = 1;
    for(int j = 2; j <= (int)sqrt(i); j ++){
            if(0 == i % j){
                flag = 0;
            }
    }
    return flag;
}

