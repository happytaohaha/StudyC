#include<stdio.h>
#include <math.h>

int isPrime(int i);
//不能用bool
//1007 素数对猜想
/**
 * 1.求解素数的方法  i < sqrt(a)  然后  比较 a %i == 0
 * 2.等于号的使用是否正确
 * 3. PAT 里面标准C 没有bool
 * 4. 可以使用math.h
 */
int main()
{
    int a[10000] ={};
    int num = 0;
    scanf("%d",&num);
    int count = 0;
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    //素数的下标
    int count1 = 2;
    //差一个等于号因为可能最后一个数也为素数
    for(int i = 3; i<= num; i++){
        if(isPrime(i)){
            count1++;
            a[count1] = i;
            if(a[count1] - a[count1-1]==2){
                count ++;
            }

        }
    }
    printf("%d", count);
    return 0;
}
//必须是<=
int isPrime(int i) {
    int flag = 1;
    for(int j = 2; j <= (int)sqrt(i); j ++){
            if(0 == i % j){
                flag = 0;
            }
    }
    return flag;
}

