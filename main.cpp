#include <stdio.h>
#include <cstring>
#include <cstdlib>

//�ļ��Ķ�д
int main(int argc, char *argv[]){
    FILE *fp;
    //�������ջ��ֱ�ӷ���ĵ�ַ
    char ch,fileName[20];
    printf("Please input filename which you want write\n");
    //fileName �Ѿ��ǵ�ַ
    scanf("%s",fileName);


   if(!(fp =fopen("D:\\a.txt","a"))){
       printf("can not open D:\\a.txt");
       exit(0);
   }
   printf("Please input the senteces which you want write\n");
   ch = getchar();//ƥ�� ����
   ch = getchar();
   while (ch != EOF){  //ctrl + Z
       fputc(ch, fp);
       ch = getchar();
   }
    fclose(fp);
    return 0;
}

