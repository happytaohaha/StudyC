#include <stdio.h>
#define PIN1 char*
typedef char* PIN2;
//define �� typedef ������
/**
 * #define  ���ܼ�  ;   #define  ֱ���滻   Ԥ����
 * typedef ��Ҫ�� ;   typedef  �任����    �����ʱ��
 */
int main(int argc, char *argv[]){
    PIN1 x, y;   // �滻��������  char * x, y;   y �����;��� char ����
    PIN2 a, b;     //    char* x ,* y;
    //ָ������ռ�ĸ��ֽ�
    printf("By #define: %d %d\n\n", sizeof(x), sizeof(y));
    printf("By typedef: %d %d\n\n", sizeof(a), sizeof(b));
    return 0;
}

