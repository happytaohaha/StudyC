#include <stdio.h>
#include <cstring>
#include <cstdlib>
//����ĸ��ֲ���  crud
//��̬����
struct stu{
    long num;
    float score;
    struct stu *next;
};

//��������
struct stu * create(){
    //��ʼ�����õ�����
    // ������������
    struct stu *head, *p1, *p2,*p3;
    //�ڶ��������ڴ�
    p3=(stu *)malloc(sizeof(struct stu));
    printf("input student num and score:(if num = 0 exit)\n");
    scanf("%ld %f\n", &(p3->num),&(p3->score));
    p1 = p3;
    p2 = p3;
    //head ��һ��ָ�� ֱ��ָ���һ����ַ

    head = NULL;
    int n = 0;
    while(p1->num != 0){
        n = n + 1;
        if(1 == n){
            head = p1;  //head ָ���һ��
        }else{
            p2->next = p1;
        }
        p2 = p1;
        p3=(stu *)malloc(sizeof(struct stu));
        scanf("%ld %f", &(p3->num),&(p3->score));
        p1 = p3;
    }
    p2->next = NULL;
    return head;
};

//��ӡ����
/**
 * ������ֵ����  ��Ϊ������ ָ��    �����������ջ�Ϸ���ռ�
 * ������ ���ô��� &��*head��   ��ַ����   *��*head��
 * @param head
 */
void print(stu *head){
    stu *p =head;
    do{
        printf("%ld %5.1f\n", p->num, p->score);
        p =p->next;
    }while (p !=NULL);
};
/**
 * ���������ô���  ���ı�head �ĵ�ַ
 *     head  ��struct stu �ĵ�ַ   &head ��ָ��ĵ�ַ
 *     �������ﴫ�������� print ��&head��  //ָ��ĵ�ַ    ���ı����ָ��ĵ�ַ
 *     * *head  ��һ��* ��  ���ݵ�ַ�ı��   �����޸ĵ���  ָ��ĵ�ַ
 *
 */
void print(stu **head){
    do{
        printf("%ld\n", *head);
        printf("%ld %5.1f\n", (*head)->num, (*head)->score);
        (*head) =(*head)->next;
    }while ((*head) !=NULL);
};

//ɾ�������е�һ�����   num  ��Ҫɾ���Ľڵ�
//��Ϊ���ص���stu��ָ�� ������ֵ����  ֵ���� ���head �ĵ�ַ��һ�������ڲ��ķŵ�����һ��
// ���涼�� ������ͬ�ĵ�ַ   ����޸ĺ��������ֵ�����޸��Ǹ�����
//Ϊʲô����head  ��Ϊ�п��ܶԵ�һ�������޸�
struct stu* deleteNode(struct stu *head, int num){
    struct stu *p1, *p2;
    if(NULL == head){
        printf("empty table!!!");
        return head;
    }else{
        p1 = head;
        while( p1 != NULL &&num !=p1->num){
            p2 = p1;
            p1 = p1 -> next;
        }
        if(p1 == NULL || p1 ->num !=num){
            printf("can't find that node!!!");
            return head;
        }else{
            if(p1 == head){
                head = p1 -> next;
            }else{
                p2->next = p1 ->next;
            }
            printf("delete success %d\n", num);
            return head;
        }
    }
};

struct stu * insert(struct stu *head, struct stu *node){
    struct stu * p0, * p1, * p2;
    p0 = node;
    p1 = head;
    if(NULL==p1){
        head = p0;
    }else{
        while(p0->num > p1->num && p1 != NULL){
            p2 = p1;
            p1 = p1 -> next;
        }
        if(p0->num <= p1 ->num){
            if(p1 == head){
                //���뵽��ͷ
                head = p0;
                p0 -> next = p1;
            }else{
                //���뵽�м�
                p2 -> next = p0;
                p0 -> next = p1;
            }
        }else{
            //���뵽���
            p1 -> next = p0;
            p0 -> next = NULL;
        }
    }
    return head;
}

//scanf
int main(int argc, char *argv[]){
    stu *head;
    head = create();
    //���������Ҫ����while ѭ������  Ҫ��Ȼ����ֵĴ���
    int op;
    int flag = 1;
    int c = 0;
    struct stu *student;
    while(flag){
        printf("==================\n");
        printf("1 ��ʾ���ݿ�\n");
        printf("2 ɾ��һ���ڵ�\n");
        printf("3 ����һ���ڵ�\n");
        printf("4 �˳�ϵͳ\n");
        printf("==================\n");
        scanf("%d",&op);

        switch(op){
            //����1 ��ʾ
            case 1:
                print(head);
                break;
            case 2:
                printf("please input delete node num:\n");
                scanf("%d",&c);
                head = deleteNode(head,c);
                break;
            case 3:
                student = (stu *) malloc(sizeof(stu));
                printf("please input new node num:\n");
                scanf("%ld %f",&(student->num), &(student->score));
                head = insert(head,student);
                break;
            case 4:
                flag = 0;
                break;
            default :
                printf("please input correct op:\n");
                break;
        }
    }
    return 0;
    //ָ��
    //��ָ��ĵ�ַ
}

