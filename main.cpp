#include <stdio.h>
#include <stdlib.h>
//1002
/**
 * �ܽ᣺ �����ַ�����int��ת��
 * �ַ���ת int     (int)(p[i]-'0')     ���ַ�����ٽ���ת��  Ҳ���� atoi(char * p)
 * int ת �ַ��� ����Ҫ֪��int�ĳ��ȣ�Ȼ���ٽ���ת�� itoa��int  a��char * p; int length��
 */
int main(int argc, char *argv[]) {
    char p[100];
    int sum = 0;
    int n = 10;//����
    int m = 1;//��¼λ��
    int temp= 0;
    scanf("%s",p);
    int i = 0;
    while(p[i]!='\0'){
        sum += (int)(p[i]-'0');
        i++;
    }
    while(sum%n != sum){
        m++;
        n = n * 10;
    }
    n = n / 10;
    int flag = 0;
    while(m){
        m--;
        if(m==0){
            flag = 1;
        }
        temp = sum/n;
        temp = temp%10;
        n = n / 10;
        switch (temp){
            case 0:
                if(flag){
                    printf("ling");
                }else{
                    printf("ling ");
                }
                break;
            case 1:
                if(flag){
                    printf("yi");
                }else{
                    printf("yi ");
                }
                break;
            case 2:
                if(flag){
                    printf("er");
                }else{
                    printf("er ");
                }
                break;
            case 3:
                if(flag){
                    printf("san");
                }else{
                    printf("san ");
                }
                break;
            case 4:
                if(flag){
                    printf("si");
                }else{
                    printf("si ");
                }
                break;
            case 5:
                if(flag){
                    printf("wu");
                }else{
                    printf("wu ");
                }
                break;
            case 6:
                if(flag){
                    printf("liu");
                }else{
                    printf("liu ");
                }

                break;
            case 7:
                if(flag){
                    printf("qi");
                }else{
                    printf("qi ");
                }
                break;
            case 8:
                if(flag){
                    printf("ba");
                }else{
                    printf("ba ");
                }

                break;
            case 9:
                if(flag){
                    printf("jiu");
                }else{
                    printf("jiu ");
                }
                break;
        }

    }
    return 0;
}

