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
//地址传递
void print(struct stu *a){
    //&a 本来就是地址
    printf("%d\n",&a);
    //a->num  相当于  取值 了   如果需要地址  再& 一下
    printf("%d\n",&(a->num));
    printf("num: %d\nname: %s\n",a->num,a->name);
};
//引用传递    a是别名
void print1(struct stu &a){
    printf("%d\n",&a);
    printf("%d\n",&(a.num));
    printf("num: %d\nname: %s\n",a.num,a.name);
};
//结构体变量的三种值传递  1.用结构体变量的成员做为参数  2.用结构体变量作为实参数  3.传递指针
int main(int argc, char *argv[]){
    struct stu stu, *boy;
    stu.num = 8;
    //1.用结构体变量的成员做为参数
    strcpy(stu.name,"yt");
    stu.score[0] = 98.5;
    stu.score[1] = 95.5;
    stu.score[2] = 90.5;
    //用结构体变量作为实参数  这种方法是值传递  会产生新对象
    printf("%d\n",&stu.num);



    print(stu);
    boy =&stu;
    print( boy);
    print1(stu);


    return 0;
}

