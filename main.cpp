#include <stdio.h>  //��׼�������
//�ַ��Ļ�������
int main() {

    printf("\n \n%d,%d\n",20/7,-20/7);
    printf("%f,%f\n",20.0/7,-20.0/7);

    printf("%d\n",100%3);

    putchar('A');
    //����ֱ�Ӵ�ASCII ��
    putchar(97-32);
    putchar('\n');
    //����ת��ΪA
    putchar('\101');
    putchar('\n');



    printf("========================\n");
    char a = 'B', b = 'o', c = 'k';
    putchar(a); putchar(b); putchar(b); putchar(c);putchar('\n');

    printf("========================\n");
    char d;
    printf("input a character \n");
    d = getchar();
    putchar(d);

    int e= 88, f = 89;
    printf("%d %d\n", e, f);
    printf("%d,%d\n", e, f);
    printf("%c,%c\n", e, f);
    printf("a=%d,b=%d\n", e, f);

    printf("========================\n");

    int g =15;
    float h =123.1234567;
    double i =12345678.1234567;
    char j ='p';
    printf("g=%d,%5d,%o,%x\n",g,g,g,g);
    printf("h=%f,%lf,%5.4lf,%e\n",h,h,h,h);
    printf("i=%lf,%f,%8.4lf\n",i,i,i);
    printf("j=%c,%8c\n",j,j);
    /**
     * float�������ȸ����ͣ���Ӧ%f.
     * double,˫���ȸ����ͣ���Ӧ%lf.
     * ���������ʱ:
     * float���Ϳ���ʹ��%lf��ʽ�����������κκô���
     * double�������ʹ����%f��ʽ���ܻᵼ���������
     */
    /**
     * ��� һ��5���ַ����ո�+�ַ�   17 8����   f  16����
     * g=15,   15,17,f
     *   ��Чλ 7λ  lf  û��  5.4f ����5 λ .4  4λС��   e ��ѧ������
     * h=123.123459,123.123459,123.1235,1.231235e+002
     *   lf  ������   f  �п��ܳ���    ����8λ  1235 ��λС��
     * i=12345678.123457,12345678.123457,12345678.1235
     * %8c һ��8���ַ����ո�+�ַ�
     * j=p,       p
     */



    /**
     * ���߲�ͬ  ����˳��ͬ
     * 8       8       7       8       -7      -8
     * 9       8       8       9       -8      -9
     */
    int k =8,l =8;
    //�����������
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",++k,k--,k++,k--,-k++,-k--);

    printf("%d\t",++l);
    printf("%d\t",--l);
    printf("%d\t",l++);
    printf("%d\t",l--);
    //ֱ�ӽ���-a ���� �����и�ֵ���  Ҳ���ǲ������l  ����  ��һ����-9
    printf("%d\t",-l++);
    printf("%d\n",-l--);

    return 0;
}
