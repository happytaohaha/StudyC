#include <stdio.h>
#include <cstring>
#include <cstdlib>

//λ����
//��Сдת��  A 65~90   a 65+32  97 ~122
int main(int argc, char *argv[]){
    char ch;

    printf("������һ����ĸ\n");
    ch = getchar();
    while (!(ch >= 'A' && ch <= 'z')|| (ch > 'Z' && ch < 'a')){
        printf("�����������������:\n");
        ch = getchar();
    }
    if(ch & 32){ //  00010000  ��Ļ�  �ж� ����λ�Ƿ�Ϊ1
         ch = ch & 223;  //111   11011111
    }else {   //A - a
        ch = ch | 32;
    }
    printf("%c",ch);
    /**
     * a  = 3 ,b =4
     * ����
     * a = a ^ b;  ���
     * b = b ^ a;
     * a = a ^ b;
     */


    return 0;
}

