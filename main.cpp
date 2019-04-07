#include<stdio.h>
//1004成绩排名
//找 最大 最小  每一个进行比较  总共比较 2n 次
//也可以使用 两两比较  大的和大的进行比较  小的和小的进行比较 3/2n  次
int main()

{
    int a = 0;
    int max = 0;
    int min = 0;
    char personMaxName[11]="";
    char personMinName[11]="";
    char personMaxNum[11]="";
    char personMinNum[11]="";
    char tempName[11]="";
    char tempNum[11]="";
    int tempScore = 0;

    //进行第一次
    scanf("%d",&a);
    a--;
    scanf("%s %s %d",tempName,tempNum,&tempScore);
    max = tempScore;
    min = tempScore;
    for(int i = 0; i< 10;i++){
        personMaxName[i] = tempName[i];
        personMinName[i] = tempName[i];
    }
    for(int i = 0; i< 10;i++){
        personMaxNum[i] = tempNum[i];
        personMinNum[i] = tempNum[i];
    }
    //以后只要判断大小
    while(a){
        a--;
        scanf("%s %s %d",tempName,tempNum,&tempScore);
        if(tempScore > max){
            max = tempScore;

            for(int i = 0; i< 10;i++){
                personMaxName[i] = tempName[i];
            }
            for(int i = 0;i< 10;i++){
                personMaxNum[i] = tempNum[i];
            }

        }
        if(tempScore < min){
            min = tempScore;
            for(int i = 0;i< 10;i++){
                personMinName[i] = tempName[i];
            }
            for(int i = 0;i< 10;i++){
                personMinNum[i] = tempNum[i];
            }
        }
    }
    printf("%s %s\n",personMaxName,personMaxNum);
    printf("%s %s\n",personMinName,personMinNum);
}

