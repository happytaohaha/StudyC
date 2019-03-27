#include <stdio.h>
#include <cstring>
#include <cstdlib>
//链表的各种操作  crud
//动态链表
struct stu{
    long num;
    float score;
    struct stu *next;
};

//创建链表
struct stu * create(){
    //初始化所用的内容
    // 这里这是声明
    struct stu *head, *p1, *p2,*p3;
    //在堆中申请内存
    p3=(stu *)malloc(sizeof(struct stu));
    printf("input student num and score:(if num = 0 exit)\n");
    scanf("%ld %f\n", &(p3->num),&(p3->score));
    p1 = p3;
    p2 = p3;
    //head 是一个指针 直接指向第一个地址

    head = NULL;
    int n = 0;
    while(p1->num != 0){
        n = n + 1;
        if(1 == n){
            head = p1;  //head 指向第一个
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

//打印出来
/**
 * 这里是值传递  因为变量是 指针    所以这个会在栈上分配空间
 * 如果变成 引用传递 &（*head）   地址传递   *（*head）
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
 * 这种是引用传递  最后改变head 的地址
 *     head  是struct stu 的地址   &head 是指针的地址
 *     所以这里传过来的是 print （&head）  //指针的地址    最后改变的是指针的地址
 *     * *head  第一个* 是  传递地址的标记   最终修改的是  指针的地址
 *
 */
void print(stu **head){
    do{
        printf("%ld\n", *head);
        printf("%ld %5.1f\n", (*head)->num, (*head)->score);
        (*head) =(*head)->next;
    }while ((*head) !=NULL);
};

//删除链表中的一个结点   num  是要删除的节点
//因为返回的是stu的指针 所以是值传递  值传递 因此head 的地址不一样，但内部的放的数据一样
// 里面都是 链表相同的地址   因此修改后面里面的值就是修改那个链表
//为什么返回head  因为有可能对第一个进行修改
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
                //插入到开头
                head = p0;
                p0 -> next = p1;
            }else{
                //插入到中间
                p2 -> next = p0;
                p0 -> next = p1;
            }
        }else{
            //插入到最后
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
    //定义变量不要放在while 循环里面  要不然出奇怪的错误
    int op;
    int flag = 1;
    int c = 0;
    struct stu *student;
    while(flag){
        printf("==================\n");
        printf("1 显示数据库\n");
        printf("2 删除一个节点\n");
        printf("3 增加一个节点\n");
        printf("4 退出系统\n");
        printf("==================\n");
        scanf("%d",&op);

        switch(op){
            //操作1 显示
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
    //指针
    //传指针的地址
}

