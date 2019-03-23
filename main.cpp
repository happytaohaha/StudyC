#include <stdio.h>
//���ô��ݺ͵�ַ����ֵ����
void swap1(int* a,int* b);
void swap2(int& a,int& b);
void swap3(int* a,int* b);
/**
 * ���ô��� �� ��ַ���� ���ڵ�ַ��û��Ӱ��
 * ��ַ����   int *a = &b;   �������ݹ���
 * ���ô���   int &a = b;  �����b����ֵ  �� &a �����ı���  ����b����Ҫȥȡ��ַ
 * ����int & b = a;   b ��a ������   b ��  a ָ��ͬһ��λ��  ��ַ���
 * �������ò�����һ���������ͣ��ڴ沢����������������ڴ棬����ֱ�ӵ����������õı�����
 */
int main(){
    printf("Hello World!\n");
    int a = 3;
    int b = 4;
    printf("bef swap, add of a = %d\n",&a);
    printf("aft swap, val of a = %d\n",a);
    printf("bef swap, add of b = %d\n",&b);
    printf("aft swap, val of b = %d\n",b);
    //swap(a,b);
    //swap1(&a,&b);
    swap2(a,b);
    //swap3(&a,&b);

    printf("bef swap, add of a = %d\n",&a);
    printf("aft swap, val of a = %d\n",a);
    printf("bef swap, add of b = %d\n",&b);
    printf("aft swap, val of b = %d\n",b);
    return 0;
}
// pass by value
//�¿����ڴ�ռ������ڴ��ϲ��������û��Ӱ��
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}
// pass by address
//��ַ����  ������ǵ�ַ��Ȼ����ڵ�ַ����ȡֵ�͸�ֵ������Ӧ��ֵ�����˸ı䵫��ַû�иı�
//����� �������ǵ�ַ  Ȼ����ڵ�ַ�ڲ��Ķ������н��������� �����Ķ���û�в������ڴ� ���Ի�������Ӱ��
void swap1(int* a,int* b){
    int temp = *a;//ȡ����ַa��ֵ������ֵ�����ͱ���temp
    *a = *b;//ȡ����ַb��ֵ���������ֵ������ַaָ���ֵ
    *b = temp;//��temp��ֵ������ַb��ָ���ֵ
}
// pass by reference
//���ô���  &a  =x;  ���� a ���ǲ���x��
void swap2(int& a,int& b){
    int temp = a;
    a = b;
    b = temp;
}
// pass by value ?
//�൱��ֵ����   ��Ȼ�������ǵ�ַ    ��ʹ��int* �м�����  ���еĽ���ʽ���м丱��������û�б任
//����Ϊswap3��һ��ֵ���ݣ�������ǰ�int*��ȫ������intһ��������������ͣ���ôswap3��swap����������һ��һ���ġ�ֻ�������ߴ�����Ǳ���a��b�Ŀ���ֵ�������ߴ�����Ǳ���a��b�ĵ�ַ�Ŀ���ֵ��ǰ�߲��ܷ�Ӧ���ⲿ������Ҳ���ܡ�
void swap3(int* a,int *b){
    int* temp = a;
    a = b;
    b = temp;
}

/**
 * ��������ο��������
 * https://www.cnblogs.com/chen-kh/p/6696305.html
 */

