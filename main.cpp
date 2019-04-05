#include <iostream>
#include<algorithm>
#include<string.h>
using namespace std;
//优雅的实现1002
int main()
{
    int sum=0;int count=0;int temp=0;
    char ch;string s;//ch作为临时变量保存输入的每一个字符，s保存sum的每一个数字
    string b[10] =  {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    while((ch=getchar())!='\n')	//如果一直输入字符，不按回车的话
        sum += (ch - '0');

    count = 0;
    temp = sum;
    while (temp)            //判断和一共有多少位
    {
        temp /= 10;
        count++;
    }
    for (int i = count-1; i >=0; i--)
    { s[i] = sum % 10+'0'; //加上0所对应的Ascll码转化为字符表示的数字
        sum /= 10;
    }
    for (int i = 0; s[i] != 0; i++){
        if (i > 0)
            printf(" ");
        cout<<b[s[i]-'0'];
    }
    return 0;

}