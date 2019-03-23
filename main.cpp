#include <stdio.h>
//结构体定义的三种方式
/**
 * 1. 先声明结构体再定义变量
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
* 2. 在声明结构体的同时一起定义变量
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
* 3. 直接定义结构体类型变量
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

