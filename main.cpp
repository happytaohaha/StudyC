#include <stdio.h>
//�ṹ��ռ�ڴ��С����
struct student{
    int num;
    char sex;
    int age;
    float score;
    char name[20];
    char addr[30];  //����ĵط�Ӧ������
} student1;   // 4 +20+ 1 +4 +4 +30
// �Ȱ�1  ��� 4  4+ 20 + 4 +4 +4 +30  =66  ����4 �ı��� ����
//�ṹ�������ռ���ڴ�����double���ʹ�С(8)��������������A���Ĵ�С��32��
struct tagPhone{
    char A;
    short C;
    int B;
};
int main(int argc, char *argv[]){
    printf("%d\n", sizeof(student));
    printf("%d\n", sizeof(tagPhone));
    return 0;
}

/**
 * �ṹ���ж��빦��   ���Ĵ洢�������ǰ���ı���   ����������ṹ��������������͵ı���  4  8 16 ��
 * �ṹ���ڴ���㷽��
 * https://blog.csdn.net/fb2058/article/details/15502071
 * �ṹ���ж��빦��
 * https://blog.csdn.net/lidoublewen/article/details/4468264
 */