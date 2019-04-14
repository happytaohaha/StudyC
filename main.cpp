#include<stdio.h>
/**
 * 1 fgets(a,10002,stdin);//指定最多输入位数的安全输入   会把 \n 也会输入
 * 2 找到E 和最后的位置
 * 3 计算指数 转换成数字.
 * 4
 */
//1024 科学计数法
int main()
{
    char a[10002]="";
    fgets(a,10002,stdin);//指定最多输入位数的安全输入
    int iBegin=0,iEnd=0;//指数位起点和终点，包含符号位
    for(int i=0;i<10002;i++)
    {
        if(a[i]=='E')
        {
            iBegin=i+1;
        }
        //与gets相比使用这个好处是：读取指定大小的数据，避免gets函数从stdin接收字符串而不检查它所复制的缓存的容积导致的缓存溢出问题
        // 而且会把 \n 收集
        if(a[i]=='\n')
        {
            iEnd=i-1;
            break;
        }
    }
    int iE=0,iCnt=1,iWei=0;
    //计算指数iE
    for(int i=iEnd;i>iBegin;i--)
    {
        iE+=(a[i]-'0')*iCnt;
        iCnt*=10;
    }

    if(a[0]=='-')
    {
        printf("-");
    }
    //指数为负时输出
    if(a[iBegin]=='-'&&iE!=0)
    {
        //前面添加指数个0
        printf("0.");
        for(int j=0;j<iE-1;j++)
        {
            printf("0");
        }
        for(int k=1;k<iBegin-1;k++)
        {
            //输出所有数字
            if(a[k]!='.')
            {
                printf("%c",a[k]);
            }
        }
    }
    //指数为正数和0合并讨论
    else
    {
        for(int k=1;k<iBegin-1;k++)
        {
            if(a[k]!='.')
            {
                printf("%c",a[k]);
                iWei++;//输出数字位数
                //按指数向后移动并输出小数点，尤其注意不要在最后一位数字后加小数点
                if(iWei==iE+1&&iWei<iBegin-3)
                {
                    printf(".");
                }
            }
        }
        for(int j=0;j<iE-(iBegin-4);j++)
        {
            printf("0");
        }
    }
    return 0;
}