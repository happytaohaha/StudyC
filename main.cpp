#include <stdio.h>  //��׼�������
#include <math.h>

//����Ҫ���庯�� �������ŵ���ǰ��
int f(int a, int b);

int main() {


    int i = 2, p;
    //���� �����������
    p = f(i, ++i);
    printf("%d\n", p);
    return 0;
}

int f(int a, int b){
    int c;
    if( a > b){
        c = 1;
    }else if( a == b){
        c = 0;
    }else{
        c = -1;
    }
    return c;
}
