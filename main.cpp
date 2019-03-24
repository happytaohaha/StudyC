#include <stdio.h>
struct stu{
    int num;
    char *name;
    char sex;
    float score;
} boy1 ={102,"Fishc", 'M',78.5};
//结构体指针的应用
int main(int argc, char *argv[]){
    struct stu *pstu;
    pstu = &boy1;
    //三者相同

    // boy1 结构体的
    printf("Number = %d\name = %s\n",boy1.num,boy1.name);

    //pstu指针取值后的num    (*pstu).num
    printf("Number = %d\name = %s\n",(*pstu).num,(*pstu).name);

    //pstu->num
    printf("Number = %d\name = %s\n",pstu->num,pstu->name);
    return 0;
}

