#include<stdio.h>
/**
 * 应该不让用long
 * 但是比较内部有自动转化为 int -> long  比较大小应该就可以比较了
 */
 //1011 A+B 和 C
int main() {
    int num = 0;
    long a, b, c;
    scanf("%d",&num);
    for(int i =1; i <= num; i++){
        scanf("%ld %ld %ld", &a, &b, &c);
        if(a + b > c){
            printf("Case #%d: true\n", i);
        }else{
            printf("Case #%d: false\n", i);
        }
    }


    return 0;
}
