#include <iostream>
#include<algorithm>
#include<string.h>
using namespace std;
//���ŵ�ʵ��1002
/**
 * ��string�������룬string��ÿһλ�����ۼӵ�sum���棬
 * �ٽ�sumת��Ϊstring���͵�num����num��ÿһλ�����Ӧ����ƴ����
 *
 * 1.��0 - 9 ����������ʹ��ʱ����
 * 2.while((ch=getchar())!='\n')	  sum += (ch - '0');  �ڻ�ȡ��ʱ��ͽ��д���
 * 3.�ж�λ����/10
 * 4.ȡÿһλ  ��%10  �� /10
 * 5.���Ҳ�м���
 */

int main()
{
    int sum=0;int count=0;int temp=0;
    char ch;string s;//ch��Ϊ��ʱ�������������ÿһ���ַ���s����sum��ÿһ������
    string b[10] =  {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    while((ch=getchar())!='\n')	//���һֱ�����ַ��������س��Ļ�
        sum += (ch - '0');

    count = 0;
    temp = sum;
    while (temp)            //�жϺ�һ���ж���λ
    {
        temp /= 10;
        count++;
    }
    for (int i = count-1; i >=0; i--)
    { s[i] = sum % 10+'0'; //����0����Ӧ��Ascll��ת��Ϊ�ַ���ʾ������
        sum /= 10;
    }
    for (int i = 0; s[i] != 0; i++){
        if (i > 0)
            printf(" ");
        cout<<b[s[i]-'0'];
    }
    return 0;

}