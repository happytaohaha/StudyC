#include<stdio.h>
/**
 *
 */
 //1021 个位数统计
int main(){
    char a[1000]="";
    int b[10]={};
    scanf("%s", a);
    for(int i = 0; a[i] !='\0';i++){
        b[a[i]-'0']++;
    }
    for(int i = 0; i < 10 ;i++){
        if(b[i] != 0){
            printf("%d:%d\n", i, b[i]);
        }
    }
    return 0;
}

