#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>

//1003
using namespace std;
bool selectStr(char str[],int length)
{

    for(int i=0; i<length; i++)
    {
        if(str[i]!='A' && str[i]!='P' && str[i]!='T')
            return false;
        else
            return true;
    }
}
int main()

{
    int n;
    char str[101];
    scanf("%d",&n);
    while(n--)
    {
        memset(str,0,101);
        scanf("%s",str);
        int length = strlen(str);
        if(selectStr(str,length))
        {
            int lena = 0;
            int lenb = 0;
            int lenc = 0;
            for(int i=0;i<length;i++)
            {
                if(str[i]!='P')
                    lena++;
                else
                    break;
            }
            for(int i=0,cnt=0;i<length;i++)
            {
                if(str[i]!='T')
                    cnt++;
                else
                {
                    lenb = cnt-lena-1;
                    lenc = length-cnt-1;
                    break;
                }

            }
            if(lenb == 0)
                printf("NO\n");
            else
            {

                if(lena*lenb == lenc)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
            //test

        }
        else
        {
            printf("NO\n");
        }

    }

    return 0;
}

/*
 * #include <stdio.h>



//1003
int main(int argc, char *argv[]){
    int a = 1;
    scanf("%d",&a);
    char p[10][100];
    getchar();
    for(int j =0;j < a;j++){
        int i = 0;
        char inputA;
        do{
            inputA = getchar();
//            printf("%c",inputA);
            p[j][i] = inputA;
            i++;
        }while (inputA != '\n');
    }
//    for(int j =0;j<a;j++){
//        printf("%s",p[j]);
//    }

    int j =0;
    while(a){
        a--;
        int flag = 0;
        int yes = 0;
        int i = 0;
        for(i = 0;p[j][i] != '\n';i++){
            if(p[j][i] =='P'){
                flag = 1;
            }else if(p[j][i] =='A'){
                if(flag == 1){
                    flag = 2;
                }else if (flag == 2){
                    flag = 4;
                }else{
                    flag = 0;
                }
            }else if(p[j][i] =='T'){
                if(flag == 2 || flag == 4){
                    flag = 3;
                    yes = 1;
                }else{
                    break;
                }
            }else{
                break;
            }
        }

        if(yes == 1 && p[j][i] == '\n'){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        j++;
    }
    return 0;
}
 * */
