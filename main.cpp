#include <stdio.h>
//�ṹ��Ƕ��
struct date{
    int month;
    int day;
    int year;
} birthday;
//������birthday ����һ�� birthday
struct {
    int num;
    char sex;
    int age;
    float score;
    char name[20];
    char addr[30];
    struct date birthday;
}student1,student2;

int main(int argc, char *argv[]){
    printf("birthday1 add:%d\n",&birthday);
    printf("birthday2 add:%d\n",&student1.birthday);
    return 0;
}

