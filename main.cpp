#include<stdio.h>
//1004�ɼ�����
//�� ��� ��С  ÿһ�����бȽ�  �ܹ��Ƚ� 2n ��
//Ҳ����ʹ�� �����Ƚ�  ��ĺʹ�Ľ��бȽ�  С�ĺ�С�Ľ��бȽ� 3/2n  ��
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

    //���е�һ��
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
    //�Ժ�ֻҪ�жϴ�С
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

