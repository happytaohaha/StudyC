#include<stdio.h>
/**
 * 1 fgets(a,10002,stdin);//ָ���������λ���İ�ȫ����   ��� \n Ҳ������
 * 2 �ҵ�E ������λ��
 * 3 ����ָ�� ת��������.
 * 4
 */
//1024 ��ѧ������
int main()
{
    char a[10002]="";
    fgets(a,10002,stdin);//ָ���������λ���İ�ȫ����
    int iBegin=0,iEnd=0;//ָ��λ�����յ㣬��������λ
    for(int i=0;i<10002;i++)
    {
        if(a[i]=='E')
        {
            iBegin=i+1;
        }
        //��gets���ʹ������ô��ǣ���ȡָ����С�����ݣ�����gets������stdin�����ַ�����������������ƵĻ�����ݻ����µĻ����������
        // ���һ�� \n �ռ�
        if(a[i]=='\n')
        {
            iEnd=i-1;
            break;
        }
    }
    int iE=0,iCnt=1,iWei=0;
    //����ָ��iE
    for(int i=iEnd;i>iBegin;i--)
    {
        iE+=(a[i]-'0')*iCnt;
        iCnt*=10;
    }

    if(a[0]=='-')
    {
        printf("-");
    }
    //ָ��Ϊ��ʱ���
    if(a[iBegin]=='-'&&iE!=0)
    {
        //ǰ�����ָ����0
        printf("0.");
        for(int j=0;j<iE-1;j++)
        {
            printf("0");
        }
        for(int k=1;k<iBegin-1;k++)
        {
            //�����������
            if(a[k]!='.')
            {
                printf("%c",a[k]);
            }
        }
    }
    //ָ��Ϊ������0�ϲ�����
    else
    {
        for(int k=1;k<iBegin-1;k++)
        {
            if(a[k]!='.')
            {
                printf("%c",a[k]);
                iWei++;//�������λ��
                //��ָ������ƶ������С���㣬����ע�ⲻҪ�����һλ���ֺ��С����
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