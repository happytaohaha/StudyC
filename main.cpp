#include<stdio.h>
/**
 * 1. 4λ��
 * 2. 0001 -1000
 * 3. %04d ǰ����0
 * 4. �������  ��һ������  6174
 */
int getMax( int a){
    int s[4] = {};
    int result = 0;
    for(int i = 0; i < 4; i++){
        s[i] = a % 10;
        a = a / 10;
    }
    int temp = 0;
    for(int i = 0; i < 4; i++){
        for(int j = i; j < 4; j++){
            if(s[i] < s[j]){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for(int i = 0; i < 4; i++){
        result = result * 10 +s[i];
    }
    return result;
};
int getMin( int a){
    int s[4] = {};
    int result = 0;
    for(int i = 0; i < 4; i++){
        s[i] = a % 10;
        a = a / 10;
    }
    int temp = 0;
    for(int i = 0; i < 4; i++){
        for(int j = i; j < 4; j++){
            if(s[i] > s[j]){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for(int i = 0; i < 4; i++){
        result = result * 10 +s[i];
    }
    return result;
};
// 1019 ���ֺڶ�
int main(){
    int a = 0;
    scanf("%d", &a);
    if(a%1111 ==0){  //�������
        printf("%4d - %4d = 0000",a,a);
    }else{
        int b1 = getMax(a);
        int b2 = getMin(a);
        a = b1 - b2;
        printf("%d - %04d = %04d\n", b1, b2, a);
        while(a != 6174){
             b1 = getMax(a);
             b2 = getMin(a);
            a = b1 - b2;
            printf("%d - %04d = %04d\n", b1, b2, a);
        }
    }
    //����
    return 0;
}

