#include<stdio.h>
/**
 * 1.��ʽ������ ���ƺ�Ҫ���ļ��
 * 2.�޸ĺ�ҲҪ�ȼ�� ��Ҫֱ����
 * 3. �����ύ����������������Ժ��������ȷ��
 * 4. n1 -n2 +n3 -n4 ... ������ 5n  Ҳ������ 5n+1
 *
 * @return
 */
 //1012 ���ַ���
int main() {
    int a = 0;
    int a1 = 0;
    int a2 = -1;
    int a3 = 0;
    float a4 = 0;
    int a5 = 0;
    int flag = 1;
    int sum = 0;
     int num = 0;
     int n = 0;
     scanf("%d", &n);
     for(int i = 0;i < n; i++){
         scanf("%d", &a);
         switch( a%5){
             case 0:
                 if( a/5%2 == 0 ){
                     a1 += a;
                 }
                 break;
             case 1:
                 if(a2 == -1){
                     a2 = 0;
                 }
                 if(flag == 1){
                     a2 += a;
                     flag = 0;
                 }else{
                     a2 -= a;
                     flag = 1;
                 }
                 break;
             case 2:
                 a3++;
                 break;
             case 3:
                 sum += a;
                 num++;
                 break;
             case 4:
                 if(a5 < a){
                     a5 = a;
                 }
                 break;
             default:
                 break;
         }
     }
    if(num != 0)
        a4 = sum/(float)num;
    if(a1 == 0){
        printf("N ");
    }else{
        printf("%d ", a1);
    }
     if(a2 == -1){
         printf("N ");
     }else{
         printf("%d ", a2);
     }
     if(a3 == 0){
         printf("N ");
     }else{
         printf("%d ", a3);
     }
     if(a4 == 0){
         printf("N ");
     }else{
         printf("%.1f ", a4);
     }
     if(a5 == 0){
         printf("N");
     }else{
         printf("%d", a5);
     }
    return 0;
}
