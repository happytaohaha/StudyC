#include <stdio.h>  //��׼�������
#include <math.h>


//ָ������
int main() {
    /**
     * ָ�������� *
     * �� �������� * ȡֵ   &ȡ��ַ
     */
    //pointer ��һ��ָ��  * ֻ��������ʱ��˵������ָ��
    int * pointer;
    int a =2000;
    //pointerָ����a���ڵĵ�ַ  int �������ָ��int ֵ��Ҫ��ͬ
    pointer = &a;
    //�����* ��ȡֵ����˼ ���*pointer ȡ���� pointer ָ��ĵ�ַ�е� a��ֵ
    printf("a=%d",*pointer);
    return 0;
}

