#include <stdio.h>  //��׼�������
#include <math.h>
//c��ָ��++����
int main() {
    int *p, i, a[10];
    p = a;
    for(i = 0; i < 10; i++){

        //scanf("%d", p++);  //���������ԭ���� һֱp++ p�ĵ�ַ��������  p���Ӻ�������һ��  ��++�й�
        scanf("%d", p+i);
//        p--;
//        printf("%d",*p);

    }
    printf("\n");
    //p = p-10;
    for(i = 0; i < 10; i++, p++){
        printf("%d",*p);
    }
    /**   �ܽ�
     *     1. �������1  �� p+i  ����ָ��
     *      2. ��p ����ȥ
     *      �Ƽ���һ��
     */

    return 0;
};
