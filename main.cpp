#include <stdio.h>
#include <cstring>
//����ṹ��
struct stu{
    long num;
    float score;
    struct stu *next;
};
int main(int argc, char *argv[]){
    struct stu a, b, c, *head;
    //head ��һ��ָ�� ֱ��ָ���һ����ַ
    a.num = 10101;
    a.score = 89.5;
    b.num = 10103;
    b.score = 90;
    c.num = 10105;
    c.score = 85;
    //head ָ���һ������
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    do{
        printf("%ld %5.1f\n",head->num,head->score);
        head =head->next;
    }while (head !=NULL);

    return 0;
}

