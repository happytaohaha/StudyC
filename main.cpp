#include <stdio.h>
#include <cstring>
#include <cstdlib>

//��̬����
struct stu{
    long num;
    float score;
    struct stu *next;
};
/**
 * ��������  1. scanf  ����ʱ  ��  ��ӦԪ�صĵ�ַ  &a.num
 *   2.  ��*p  ָ��һ����ָ��ʱ��  p3=(stu *)malloc(sizeof(struct stu));
 *   3.   clion���debug  �ô�
 */
//scanf
int main(int argc, char *argv[]){
    struct stu a, *head, *p1, *p2,*p3;
    printf("input student num and score:\n");
    scanf("%ld %f", &a.num,&a.score);
    p1 = &a;
    p2 = &a;
    //head ��һ��ָ�� ֱ��ָ���һ����ַ

    head = NULL;
    int n = 0;
    while(p1->num != 0){
        n = n + 1;
        if(n == 1){
            head = p1;  //head ָ���һ��
        }else{
           p2->next = p1;
        }
        p2 = p1;
        printf("p1 add:%d\n",p1);
        p3=(stu *)malloc(sizeof(struct stu));
        scanf("%ld %f", &(p3->num),&(p3->score));
        p1 = p3;
    }
    p2->next = NULL;


    do{
        printf("%ld %5.1f\n",head->num,head->score);
        head =head->next;
    }while (head !=NULL);

    return 0;
}

