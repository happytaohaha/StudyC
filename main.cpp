#include <stdio.h>
#include <cstring>
#include <cstdlib>

//文件的读写
int main(int argc, char *argv[]){
    FILE *fp;
    //这个是在栈中直接分配的地址
    char ch,fileName[20];
    printf("Please input filename which you want write\n");
    //fileName 已经是地址
    scanf("%s",fileName);


   if(!(fp =fopen("D:\\a.txt","a"))){
       printf("can not open D:\\a.txt");
       exit(0);
   }
   printf("Please input the senteces which you want write\n");
   ch = getchar();//匹配 换行
   ch = getchar();
   while (ch != EOF){  //ctrl + Z
       fputc(ch, fp);
       ch = getchar();
   }
    fclose(fp);
    return 0;
}

