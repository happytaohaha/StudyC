#include <stdio.h>
#include <cstring>
#include <cstdlib>

//typedef  �������  DATE
typedef struct Date
{
    int month;
    int day;
    int year;
} DATE;
/**
 *  typedef �� #define ������
 *  #define  ����Ԥ�����ʱ����е��ַ��滻
 *  typedef �ڱ�����еĽ���
 */
typedef int NUM[100];

//typedef���� ����  P ����ָ�� char ��ָ��
// �����char * ��ͬ����
// �����ǰ�ƫ����һ��һ��д������ ������ջ��
// ������char * ����  �ַ����ڳ����� char * ֻ�����һ����ַ
typedef char *P;

//POINTER  ����voidֵ�ĺ���ָ��  �е�����
typedef void (*POINTER)();
void fun(){
    printf("I love Fishc.com");
}

int main(int argc, char *argv[]){
    DATE date_one;
    Date date_two;
    date_one.year = 2019;
    date_one.month = 3;
    date_one.day = 27;
    date_two =date_one;
    printf("%d - %d - %d\n",date_two.year,date_two.month,date_two.day);
    NUM num;
    printf("%d\n ", sizeof(num));  //int[100] �ĳ���

    P p1;
    p1 = "I love Fishc.com";
    printf("%s\n",p1);

    POINTER pointer;
    pointer =&fun;  //���� pointer = fun
    //ִ��
    (pointer)();
    return 0;
}

