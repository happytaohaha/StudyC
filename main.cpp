#include <stdio.h>
//�ṹ�嶨������ַ�ʽ
/**
 * 1. �������ṹ���ٶ������
 */
#if (0)
 struct student{
     int num;
     char sex;
     int age;
     float score;
     char name[20];
     char addr[30];
 };
 student student1,student2;
#endif
/**
* 2. �������ṹ���ͬʱһ�������
*/
#if (0)
struct student{
     int num;
     char sex;
     int age;
     float score;
     char name[20];
     char addr[30];
 }student1,student2;
#endif
/**
* 3. ֱ�Ӷ���ṹ�����ͱ���
*/
struct {
    int num;
    char sex;
    int age;
    float score;
    char name[20];
    char addr[30];
}student1,student2;

int main(int argc, char *argv[]){
    return 0;
}

