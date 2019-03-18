#include <stdio.h>//include  头文件  <> 一般是标准模板中的
#include <math.h>
//sin计算
int main() {
    //定义pi   cospi  = -1    acos （-1）  = pi
    const double pi = acos(-1.0);
    double x, r, s;
    //\n换行   printf  输出一段话
    printf("input number:\n");
    //%lf  左边的一个浮点数
    scanf("%lf",&x);
    //角度转弧度   也就是是多少pi
    r = x * pi / 180;
    //这里的都是拿弧度进行计算的
    s = sin(r);
    printf("sin of %lf is %lf\n",x,s);

    return 0;  //return  0  是正常返回的，如果不是0  则是错误的
}