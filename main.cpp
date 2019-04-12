#include<stdio.h>
#include <math.h>
/**
 * 1.字符串如果需要60位 一般要给61位最后一位存\n
 * 2.第一个条件是A-G  最后还要%7
 */
//1014福尔摩斯的约会
int main() {
    char a[61] = "";
    char b[61] = "";
    char c[61] = "";
    char d[61] = "";
    gets(a);
    gets(b);
    gets(c);
    gets(d);
    int x = 0;
    int y = 0;
    int z = 0;
    int w = 0;
    int flagHours =0 ;//找到大写字母
    for(int i=0; a[i] !='\0'&& b[i] != '\0'; i++){
        if(x == 0){
            if( a[i] >= 'A' && a[i] <= 'G'){
                if(a[i] == b[i]){
                    x = (int)a[i] - 'A' + 1;
                }
            }
        }else{
            if(flagHours==0){//找到0-9 A-N
                if((a[i] >= 'A' && a[i] <= 'N')){
                    if(a[i] == b[i]){
                        y = a[i] - 'A'+10;
                        flagHours =1;
                    }
                }else if(a[i]>= '0' && a[i] <= '9'){
                    if(a[i] == b[i]){
                        y = a[i] - '0';
                        flagHours =1;
                    }
                }
            }
        }
    }
    int flagMin = 1;
    for(int i=0; c[i] !='\0'&& d[i] != '\0'; i++){
        if(flagMin){//第 1 对相同的英文字母 s  的位置
            if((c[i] >= 'A'  && c[i] <= 'Z') || (c[i] >= 'a'  && c[i] <= 'z')) {
                if(c[i] == d[i]){
                    w = z;
                    flagMin = 0;
                }
            }
        }
        z++;
    }
    x= x%7;
    switch(x){
        case 0:
            printf("%s","SUN ");
            break;
        case 1:
            printf("%s","MON ");
            break;
        case 2:
            printf("%s","TUE ");
            break;
        case 3:
            printf("%s","WED ");
            break;
        case 4:
            printf("%s","THU ");
            break;
        case 5:
            printf("%s","FRI ");
            break;
        case 6:
            printf("%s","SAT ");
            break;
        default:
            break;
    }
    if(y<=9){
        printf("0%d:",y);
    }else{
        printf("%d:",y);
    }
    if(w<=9){
        printf("0%d",w);
    }else {
        printf("%d", w);
    }
    return 0;
}
