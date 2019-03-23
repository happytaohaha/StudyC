#include <stdio.h>
//结构体占内存大小计算
struct student{
    int num;
    char sex;
    int age;
    float score;
    char name[20];
    char addr[30];  //补齐的地方应该是这
} student1;   // 4 +20+ 1 +4 +4 +30
// 先把1  变成 4  4+ 20 + 4 +4 +4 +30  =66  不是4 的倍数 补齐
//结构体中最大占用内存类型double类型大小(8)的整数倍，所以A最后的大小是32；
struct tagPhone{
    char A;
    short C;
    int B;
};
int main(int argc, char *argv[]){
    printf("%d\n", sizeof(student));
    printf("%d\n", sizeof(tagPhone));
    return 0;
}

/**
 * 结构体有对齐功能   她的存储方法都是按最长的倍数   最后计算出来结构体最终是最大类型的倍数  4  8 16 等
 * 结构体内存计算方法
 * https://blog.csdn.net/fb2058/article/details/15502071
 * 结构体有对齐功能
 * https://blog.csdn.net/lidoublewen/article/details/4468264
 */