#include <stdio.h>  //标准输入输出
//类型转换再探究
int main() {

    float PI = 3.14159;
    int s ;
    double s1 ;
    int r = 1;
    //计算时先变成double  然后  运算完再转换为  int
    s= r * r * PI;
    s1= r * r * PI;
    printf("%d\n",s);
    printf("%f\n",s1);


    float f = 5.75;
    //强制变为整形  是临时的
    printf("(int)f =%d,f =%f\n",(int)f,f);



    return 0;
}
