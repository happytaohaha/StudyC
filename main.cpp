#include <stdio.h>
#include <cstring>
#include <cstdlib>

//ѭ����λ
int main(int argc, char *argv[]){
    unsigned char a, b, c;
    int n;
    printf("��������Ҫѭ�����Ƶ����֣�");
    scanf("%d", &a);
    printf("��������Ҫ���ƶ���λ��:");  //ԭʼ��  00000011
    scanf("%d", &n);//1   00000001
    b = a <<(sizeof(char) *8 - n ); //7   �ƶ����λ��  10000000
    c = a >>n;
    c = c | b;          //10000001
    printf("�����: %c\n",c);
    return 0;
}

