#include <stdio.h>
#include <cstring>
#include <cstdlib>

//��λ�����
int main(int argc, char *argv[]){
    int a = 2;
    int b = -2;
    unsigned int c = 2;
    unsigned  int d = 255;
    a = a >> 1;   //��ͷָ�ı����Ǳ��ƶ�
    b = b >> 1;
    c = c >> 1;
    printf("%d\n",c);
    printf("%d\n",a);
    printf("%d\n",b);
    a = a << 1;
    b = b << 1;
    c = c << 1;
    printf("%d\n",c);
    printf("%d\n",a);
    printf("%d\n",b);

    //��������λ ������   ����  ���� �ұ߲�0  ���� ����  ��1
    // �߼���λ��������   ����  ���� �ұ߲�0

    return 0;
}

