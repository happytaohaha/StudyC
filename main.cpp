#include <stdio.h>  //��׼�������
#include <math.h>
//a[]  === *a
// *a ȡֵ   a Ϊ
/**
 * a[]  === *a
 * ̽��
 * 1.   a[1] = 1 ;��'=' �Ǹ�ֵ��
 * 2.   a[1] =a[2] ;�����--> ����˼   a[1]��a[2]ָ��ͬһ����
 * * a ͬ��
 * ��˽�� a[]  === *a ��ԭ��    a �ǵ�ַ  * ,[]  �� ȡֵ
 */
void converse(int a[],int len){
    int mid, i, j;
    mid = len / 2;
    for( i = 0; i < mid ; i++) {
        j = a[i];//�����е�ֵ��j
        a[i] = a[len - 1 - i];// ��ֵ����ָ��
        a[len - 1 - i] = j;//������ַ
    }
}
int main() {
    int a[11]={ 3, 7, 9, 11, 0, 6, 7, 5, 4, 2,11};
    //a���ǵ�ַ
    converse(a,11);
    for(int i = 0; i < 11; i++){
        printf("%d ",a[i]);
    }
    return 0;
};

