#include<stdio.h>
#include <algorithm>
#include <cstring>
/**  1015 德才论
 * 1. 德才都达标  按分数排序
 * 2. 德胜才  德达标  才不达标  分数排序
 * 3. 德才皆亡  德分达到最低录取分  才分低于德分    得胜才
 * 4.其他最后
 * 5.去掉 有出现到不达到最低分的人
 * 6. 自己写的还是有问题
 */
using namespace std;
struct info{
    char num[10];
    int de_s,cai_s,sum;
    int clas;//类别
}stu[100010];
// 调用比较函数  排序方式
bool cmp(info a,info b){
    if(a.clas != b.clas) return a.clas < b.clas;
    else if(a.sum != b.sum) return a.sum > b.sum;
    else if(a.de_s != b.de_s) return a.de_s > b.de_s;
    else return strcmp(a.num,b.num) < 0;
}

int main(){
    int N,L,H;
    scanf("%d%d%d",&N,&L,&H);
    int cnt = N;
    for(int i = 0;i < N; i++) {
        scanf("%s %d %d",&stu[i].num,&stu[i].de_s,&stu[i].cai_s);
        stu[i].sum = stu[i].de_s + stu[i].cai_s;
        if(stu[i].de_s < L || stu[i].cai_s < L) {
            stu[i].clas = 5;
            cnt--;//及格人数减少1   如果不及格就扔了
        }
        else if(stu[i].de_s >= H && stu[i].cai_s >= H) stu[i].clas = 1;
        else if(stu[i].de_s >= H && stu[i].cai_s < H) stu[i].clas = 2;
        else if(stu[i].de_s < H && stu[i].cai_s < H && stu[i].de_s >= stu[i].cai_s) stu[i].clas = 3;
        else stu[i].clas = 4;
    }
    sort(stu,stu+N,cmp);
    printf("%d\n",cnt);
    for(int i = 0;i < cnt; i++) {
        printf("%s %d %d\n",stu[i].num,stu[i].de_s,stu[i].cai_s);
    }

    return 0;
}

