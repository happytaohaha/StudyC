#include<stdio.h>
#include <algorithm>
#include <cstring>
/**  1015 �²���
 * 1. �²Ŷ����  ����������
 * 2. ��ʤ��  �´��  �Ų����  ��������
 * 3. �²Ž���  �·ִﵽ���¼ȡ��  �ŷֵ��ڵ·�    ��ʤ��
 * 4.�������
 * 5.ȥ�� �г��ֵ����ﵽ��ͷֵ���
 * 6. �Լ�д�Ļ���������
 */
using namespace std;
struct info{
    char num[10];
    int de_s,cai_s,sum;
    int clas;//���
}stu[100010];
// ���ñȽϺ���  ����ʽ
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
            cnt--;//������������1   ��������������
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

