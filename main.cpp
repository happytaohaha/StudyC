#include<stdio.h>
//
/**
 * scanf  ���з���ֵ��
 * scanf("%d %d", &a, &b)
 * ���a b���ɹ����룬����ֵΪ2��
 * ���ֻ��a���ɹ����룬����ֵΪ1��
 * ���a��b��δ���ɹ����룬����ֵΪ0��
 * ��ȡ���󷵻ص��� -1  EOF
 * ����������������end of file������ֵΪEOF��end of fileΪCtrl+z ����Ctrl+d��
 */
 //1010 һԪ����ʽ��
int main() {
    int a, b;

    int flag = 0;
    while(scanf("%d %d", &a, &b) == 2){
        if( b != 0){
            if(flag == 0){
                    printf("%d %d", a*b, b-1);
                    flag = 1;
            }else{
                    printf(" %d %d", a*b, b-1);
            }
        }
    }
     if(flag == 0)
         printf("0 0");
    return 0;
}
