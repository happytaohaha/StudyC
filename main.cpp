#include<stdio.h>
#include <math.h>
/**
 * 难点 需要 计算前10000个素数，数据量小可以一个一个算
 * 格式 考虑一开始有问题
 *
 */
//1013 数素数
int isPrime(int x){
    int flag = 1;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i == 0)
        {
            flag=0;
        }
    }
    return flag;
}
int main() {
    int a[10000];
    //因为10000 比较小还可以求的出来
    //1.先找出10000以内所有素数
    a[0] = 2;
    int j =1;
    for(int i = 3; j < 10000; i++){//题为前10000个素数
        if(isPrime(i)){
            a[j] = i;
            j++;
        }
    }
    //2.按格式输出
    int m, n;
    int k = 1;
    scanf("%d %d", &m, &n);
    for(int i = m; i <= n; i++){
        if(k %10 != 0 && i != n){
           printf("%d ",a[i-1]);
        }else if(k % 10 == 0){
            printf("%d\n",a[i-1]);
        }
        else{
            printf("%d",a[i-1]);
        }
        k++;
    }


    return 0;
}
