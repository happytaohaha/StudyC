#include <stdio.h>
struct stu{
    int num;
    char *name;
    char sex;
    float score;
} boy1 ={102,"Fishc", 'M',78.5};
//�ṹ��ָ���Ӧ��
int main(int argc, char *argv[]){
    struct stu *pstu;
    pstu = &boy1;
    //������ͬ

    // boy1 �ṹ���
    printf("Number = %d\name = %s\n",boy1.num,boy1.name);

    //pstuָ��ȡֵ���num    (*pstu).num
    printf("Number = %d\name = %s\n",(*pstu).num,(*pstu).name);

    //pstu->num
    printf("Number = %d\name = %s\n",pstu->num,pstu->name);
    return 0;
}

