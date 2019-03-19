#include <stdio.h>  //标准输入输出
//实型数的舍入误差
int main() {

    float a ,b;
    //e*10^5    舍入误差
    //12345678900
    a = 123456.789e5;
    //float只保证7-8位尾数精度 ，其他位置就是自己乱填的
    //精确更高就用double，也只有约14-18个有效数位
    //float    3.4e-38  ~~ 3.4e38
    //double   1.7e-308 ~~ 1.7e308
    b = a - 20;
    //默认小数点后6位
    printf("a=%f\n",a);
    printf("b=%f\n",b);
    return 0;
}
