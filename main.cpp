#include <stdio.h>
#include <cstring>

struct stu{
    int num;
    char name[20];
    char sex;
    float score[3];
};
void print(struct stu a){
    printf("%d\n",&(a.num));
    printf("num: %d\nname: %s\n",a.num,a.name);
};
//��ַ����
void print(struct stu *a){
    //&a �������ǵ�ַ
    printf("%d\n",&a);
    //a->num  �൱��  ȡֵ ��   �����Ҫ��ַ  ��& һ��
    printf("%d\n",&(a->num));
    printf("num: %d\nname: %s\n",a->num,a->name);
};
//���ô���    a�Ǳ���
void print1(struct stu &a){
    printf("%d\n",&a);
    printf("%d\n",&(a.num));
    printf("num: %d\nname: %s\n",a.num,a.name);
};
//�ṹ�����������ֵ����  1.�ýṹ������ĳ�Ա��Ϊ����  2.�ýṹ�������Ϊʵ����  3.����ָ��
int main(int argc, char *argv[]){
    struct stu stu, *boy;
    stu.num = 8;
    //1.�ýṹ������ĳ�Ա��Ϊ����
    strcpy(stu.name,"yt");
    stu.score[0] = 98.5;
    stu.score[1] = 95.5;
    stu.score[2] = 90.5;
    //�ýṹ�������Ϊʵ����  ���ַ�����ֵ����  ������¶���
    printf("%d\n",&stu.num);



    print(stu);
    boy =&stu;
    print( boy);
    print1(stu);


    return 0;
}

