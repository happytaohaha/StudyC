#include <stdio.h>
#include <cstring>
#include <cstdlib>

//动态链表
struct stu{
    long num;
    float score;
    struct stu *next;
};
/**
 * 两个问题  1. scanf  输入时  用  对应元素的地址  &a.num
 *   2.  让*p  指向一个新指针时用  p3=(stu *)malloc(sizeof(struct stu));
 *   3.   clion里的debug  好蠢
 */
//scanf
int main(int argc, char *argv[]){
    struct stu a, *head, *p1, *p2,*p3;
    printf("input student num and score:\n");
    scanf("%ld %f", &a.num,&a.score);
    p1 = &a;
    p2 = &a;
    //head 是一个指针 直接指向第一个地址

    head = NULL;
    int n = 0;
    while(p1->num != 0){
        n = n + 1;
        if(n == 1){
            head = p1;  //head 指向第一个
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

