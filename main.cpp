#include <stdio.h>  //��׼�������
//����ת����̽��
int main() {

    float PI = 3.14159;
    int s ;
    double s1 ;
    int r = 1;
    //����ʱ�ȱ��double  Ȼ��  ��������ת��Ϊ  int
    s= r * r * PI;
    s1= r * r * PI;
    printf("%d\n",s);
    printf("%f\n",s1);


    float f = 5.75;
    //ǿ�Ʊ�Ϊ����  ����ʱ��
    printf("(int)f =%d,f =%f\n",(int)f,f);



    return 0;
}
