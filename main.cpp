#include <stdio.h>  //��׼�������
//�ַ�char ��Ӧ��
int main() {
    /**
     *  �ַ����� ''   �ַ�������  " "
     */
    char a, b, c, d, e, f;
    // ascill������Ӧ�� ֵ  120 ��Ӧ x   121 =  y
    a = 120;
    b = 121;
    //���������ַ�
    c = 'x';
    d = 'y';
    printf("a=%d,a=%c\n",a,a);
    printf("b=%d,b=%c\n",b,b);
    printf("c=%d,c=%c\n",c,c);
    printf("d=%d,d=%c\n",d,d);
    //Сд���д    Сд -32
    e = a - 32;
    f = b - 32;
    printf("e=%d,e=%c\n",e,e);
    printf("f=%d,f=%c\n",f,f);







    return 0;
}
