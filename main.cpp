#include<stdio.h>
/**
 * math.h 小写
 * 1.处理字符和 数字之间的关系
 */
// 1016 部分A+B
int main(){
    char A[11] = "", B[11] = "";
    char DA, DB;
    long result1 = 0;
    long result2 = 0;
    long result3 = 0;
    scanf("%s %c %s %c", A, &DA, B,&DB);
    int i = 0;
    int aNum = 0, bNum = 0;
    while(A[i] != '\0'){
        if(A[i] == DA){
            aNum++;
        }
        i++;
    }
    i=0;
    while(B[i] != '\0'){
        if(B[i] == DB){
            bNum++;
        }
        i++;
    }
    int aa =(int)(DA - '0');//0*10+  6*10 +6
    for(int j = 0; j < aNum; j++){
        result1 = result1*10+ aa;
    }
    int bb =(int)(DB - '0');//0 *10 +3   3*10+3 33*10+3
    for(int j = 0; j < bNum; j++){

        result2 = result2*10+ bb;
    }
    result3 = result1 + result2;
    printf("%ld", result3);
    return 0;
}

