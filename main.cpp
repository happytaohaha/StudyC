#include<stdio.h>

//1008 数组元素循环右移问题
/**
 * 1.做了一个欺骗让他认为我做了移位，其实并没有
 * 2.用好 / 和 %  功能很强大
 */
int main()
{
    int n = 0, m = 0;
    int array[100]= {};
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    m =m % n;
    for(int i = 0; i < n; i++){
        if(0 == i){
            printf("%d",array[(n-m+i)%n]);
        }else{
            printf("% d",array[(n-m+i)%n]);
        }
    }
    return 0;
}

