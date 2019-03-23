#include <stdio.h>  //标准输入输出
#include <math.h>
//返回指针的函数
double* search( double(*pointer)[4],int n);
int main() {
    /**
     * 总结 : 1.在复制循环体的时候  要检查变量 ，以防错误， for()  内的所有参数检查
     *      2. 在复制的时候一定注意！！！！！！！！
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

    //找出不及格的学生
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
            printf("\n学生%d\t",i);
            for( k = 0; k < 4; k++){
                printf("%lf\t",*(p+k));
            }
        }
    }

    return 0;
};
/**
 * 传入地址 返回地址  对于  * 来说
 */
double* search( double(* pointer)[4],int n){
    double* p;
    //*(pointer + n) 就是一维  pointer[n]  取地址
    p = *(pointer + n);
    //ruturn  的是地址
    return p;
};

