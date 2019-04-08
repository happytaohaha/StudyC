#include<stdio.h>


//1005 继续(3n+1)猜想
/**
 * 1.利用flag来及进行标记哪一个是否已经被扫描过了，这样不需要花费额外的空间
 * 2.进行排序
 * 3.flag 可能很大所以这里设为10000
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
        //t没有被标记过
        if(flag[t] != 1){
            while(t != 1){//覆盖
                if(t%2 == 0) {
                    t = t/2;
                }else{
                    t = (t*3+1)/2;
                }
                printf("%d ",t);
                if(flag[t] == 1){ //以后的覆盖了就让以后的不用覆盖
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

