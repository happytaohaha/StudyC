#include <stdio.h>
//main�������о�
/**
 * main ��������������   int argc, char *argv[] ����  �� ������ַ�
 * ��;  ������������������ʱ�Ĳ���
 */
int main(int argc, char *argv[]){
    int i;
    printf("the number of string is : %d\n",argc-1);
    for (i = 0; i < argc; ++i) {
        printf("the string %d is : %s\n",i,argv[i]);
    }
    return 0;
}

