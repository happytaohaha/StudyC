#include <stdio.h>  //��׼�������
#include <math.h>
//����ָ��ĺ���
double* search( double(*pointer)[4],int n);
int main() {
    /**
     * �ܽ� : 1.�ڸ���ѭ�����ʱ��  Ҫ������ ���Է����� for()  �ڵ����в������
     *      2. �ڸ��Ƶ�ʱ��һ��ע�⣡��������������
     */
    double score[][4]={{60.0,70.0,80.5,90.5},{56.0,89.0,67.0,88.0},{34.2,78.5,90.0,60.0}};
    double *p;
    int i, m, j, k, flag;
    printf("Please enter the number of Student:");
    scanf("%d",&m);
    p =search(score, m);
    for( i = 0; i < 4; i++){
        printf("%lf\t",*(p+i));
    }
    printf("\n");

    //�ҳ��������ѧ��
    printf("Not Passed Students:");
    for( i = 0; i < 3; i++){
        flag = 0;
        p =search(score, i);
        for( j = 0; j < 4; j++){
            if(*(p+j)<60){
                flag = 1;
            }
        }
        if(flag ==1){
            printf("\nѧ��%d\t",i);
            for( k = 0; k < 4; k++){
                printf("%lf\t",*(p+k));
            }
        }
    }

    return 0;
};
/**
 * �����ַ ���ص�ַ  ����  * ��˵
 */
double* search( double(* pointer)[4],int n){
    double* p;
    //*(pointer + n) ����һά  pointer[n]  ȡ��ַ
    p = *(pointer + n);
    //ruturn  ���ǵ�ַ
    return p;
};

