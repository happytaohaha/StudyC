#include <stdio.h>  //��׼�������
#include <math.h>
//ָ��ĵ�ַ���ݺ����ô���

//��ַ����  *p  ��ʾȡֵ  ���Դ��������ǵ�ַ
void swap(int *p1,int *p2){
    //��ַ������
    int tmp=*p1;
    *p1=*p2;
    *p2=tmp;
};

//���ô���   &p1�� �ǵ�ַ   ���ﲻ���ʼ��һ���µĶ�����һ������   ԭ���ϻ��Ǹı��ַ
//p1 p2  ������ a  b
//ͬʱ���Կ��������ú͵�ַ���ݿ�������
void swap(int &p1,int &p2){
    int tmp=p1;
    p1=p2;
    p2=tmp;
};

//ֵ����   ����ʵ��û���κ�Ӱ��   ����Ķ��� new������
void swap1(int p1,int p2){
    int tmp=p1;
    p1=p2;
    p2=tmp;
};

//��ַ��������C֧�� ���ô���C++ ֧��
int main() {
    int a=4,b=6;
    printf("a=%d,b=%d��\n",a,b);

    //���ݵ�ַ  &a,&b
    swap(&a,&b);
    printf("a=%d,b=%d��\n",a,b);

    //������õ���swap(int &p1,int &p2)
    //����ע��������a b
    swap(a,b);
    printf("a=%d,b=%d��\n",a,b);

    //ֵ����  ����ʵ��û��Ӱ��
    swap1(a,b);
    printf("a=%d,b=%d��\n",a,b);
/** ���
 * a=4,b=6��
 * a=6,b=4��
 * a=4,b=6��
 * a=4,b=6��
 */

    return 0;
};
