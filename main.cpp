#include <stdio.h>  //��׼�������
//scanfʹ��ע������
int main() {

    int a , b, c;
    printf("input  a, b, c\n");
    // ����ֻ����&a, &b, &c   ��ʾ�����ĵ�ַ��ֵ
    scanf("%d%d%d", &a, &b, &c);
    //������ַǷ��ַ��ͻ�ֹͣ���scanf  ���� 12A  �ͻ�ֹͣ
    printf("a=%d, b=%d, c=%d", a, b, c);
    //* ��ʾ���� �������
    scanf("%d%*d%d", &a, &b);
    printf("a=%d, b=%d", a, b);
    //Ϊ����ӳ���
    scanf("%4d%4d%4d", &a, &b, &c);

    //char ����
    char  e, d, f;
    //��ѿո�Ҳ�ᵱ��һ�����������
    scanf("%c%c%c\n", &e, &d, &f);
    printf("e=%c, d=%c, f=%c", e, d, f);
    //ÿ����һ���ַ�����ӿո�  ��int û������������
    scanf("%c %c %c\n", &e, &d, &f);
    printf("e=%c, d=%c, f=%c", e, d, f);
    //sizeof ����������ռ�ĳ���
    printf("sizeof(e)=%d",sizeof(e));


    /**
     * ��Ŀ��������Сд��ĸ�������ASCII��Ͷ�Ӧ�Ĵ�д��ĸ
     */
     char h, i, j;
     printf("input character h, i, j:");
     scanf("%c %c %c\n", &h, &i, &j);
     //�����ַ�����ֱ��%d ��ӡ��ascii��
     printf("%d,%d,%d\n%c,%c,%c\n", a, b, c, a-32, b-32, c-32);
    return 0;
}
