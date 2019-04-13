#include<stdio.h>
/**
 *  1.注意字符与数字之间的转化    charA[i] -'0'   字符转 数字   (char)(a[0]+'0') 数字转字符
 *  2.考虑特殊情况 拿出来单独处理 1 2 前两位  和只有一位的情况
 */
// 1017 A除以B
int main(){
    char charA[1000] = "";
    int a[1000] = {};
    int b;
    int c[1000] = {};
    int d;
    int tempYuShu;
    int i = 0;
    scanf("%s %d", charA, &b);
    for(; charA[i] != '\0'; i++){
        a[i] = charA[i] -'0';
    }
    int j = 0;
    int k = 0;
    int flag = 1;
    if(a[0]/b){
        c[0] = a[0] / b;
        tempYuShu = a[0] % b;
        j = 1;
    }else if(a[1]=='\0'){
        c[0] = a[0] / b;
        tempYuShu = a[0] % b;
        flag = 0;
    }else{
        c[0] =(a[0]*10 +a[1])/b;
        tempYuShu = (a[0]*10 +a[1]) % b;
        j = 2;
    }
    k++;
    if(flag==1){
        for(; j < i; j++){
            c[k] = (tempYuShu *10 +a[j])/b;
            tempYuShu =(tempYuShu *10 +a[j])%b;
            k++;
        }
    }

    for(int l =0;l<k;l++){
        printf("%d",c[l]);
    }
    printf(" %d",tempYuShu);
    return 0;
}

