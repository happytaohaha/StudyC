#include <stdio.h>
#define A(x) x;x;
#define MAX(a,b) (a > b ) ? a : b
//�궨��Ӧ��
int main(int argc, char *argv[]){
    int n = 0;
    int x, y, max;
    //�����滻 ��x ִ��2��   2*2*2
    A(A(A(printf("%d\n",n++))));
    printf("intput two numbers:\n");
    scanf("%d %d",&x,&y);
    max = MAX(x,y); //max = (x > y) ? x : y;  ֱ���滻
    printf("Max is %d\n", max);
    return 0;
}

