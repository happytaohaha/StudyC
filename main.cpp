#include<stdio.h>


//1005 ����(3n+1)����
/**
 * 1.����flag�������б����һ���Ƿ��Ѿ���ɨ����ˣ���������Ҫ���Ѷ���Ŀռ�
 * 2.��������
 * 3.flag ���ܴܺ�����������Ϊ10000
 */
int main()
{
    int sum = 0;
    scanf("%d",&sum);
    int a[100]={};
    int temp[100]={};
    int flag[10000] ={};
    int indexTemp = 0;
    int t = 0;
    for(int i = 0; i < sum; i++){
        scanf("%d",&a[i]);
        t = a[i];
        //tû�б���ǹ�
        if(flag[t] != 1){
            while(t != 1){//����
                if(t%2 == 0) {
                    t = t/2;
                }else{
                    t = (t*3+1)/2;
                }
                printf("%d ",t);
                if(flag[t] == 1){ //�Ժ�ĸ����˾����Ժ�Ĳ��ø���
                    break;
                }
                flag[t] = 1;
            }
        }
    }

    for(int i = 0;i < sum; i++){
        t = a[i];
        if(!flag[t]){
            temp[indexTemp] = t;
            indexTemp++;
        }
    }

    for(int i = 0; i <indexTemp; i++){
        int tempnum = 0;
        for(int j = i+1; j <indexTemp;j++ ){
            if(temp[i]<temp[j]){
                tempnum = temp[i];
                temp[i] = temp[j];
                temp[j] = tempnum;
            }
        }
    }
    int first = 1;
    for(int i =0; i < indexTemp; i++){
        if(first){
            printf("%d",temp[i]);
            first = 0;
        }else{
            printf(" %d",temp[i]);
        }
    }

    return 0;
}

