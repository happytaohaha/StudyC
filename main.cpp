#include <stdio.h>
//void ���� voidָ���constָ��
/**
 * void�����ã�
 * ��1�����ں������ص��޶�
 * ��2�����ں����������޶�
 * void abc��void��
 */
 /**voidָ��
  * void ָ������ �� ��ָ������ָ����һ���������ݵ�ָ�����
  * ���磺 void *p��
  * ��ʾָ�����p��ָ��һ��ȷ�����������ͣ���������ֻ�������һ����ַ��
  * void ָ��������ָ���κ��������ݡ� Ҳ����˵���������κ����͵�ָ��ֱ�Ӹ�void ָ�븳ֵ��
  * ���ǣ������Ҫ��voidָ���ֵ��ֵ���������͵�ָ�룬����Ҫ����ǿ������ת��
  */
  /**
   * constָ��
   * ��������
   */
void fun1(){
          const char  *str ="Welcom to YTHAHAHA\n";
          printf("\n\n%s",str);
#if(0)

          str[0] ='w';  //����Ǵ���ģ����ǿ��Ըı� *str  ֱ�Ӹı�    const  ������ char ��
#endif
          str = "I love ythahaha\n";
        printf("\n\n%s",str);
};
void fun2(){
     char * const str1 ="Welcom to YTHAHAHA\n";
    printf("\n\n%s",str1);

    str1[0] = 'w';
    printf("\n\n%s",str1);
#if(0)
    str1 = "I love ythahaha\n"; //����Ǵ���ģ����ǿ��Ըı� ÿһ���ַ�  ֱ�Ӹı�     const  ������ str ��
    printf("\n\n%s",str1);
#endif
};
void fun3(){
    const char * const str2 ="Welcom to YTHAHAHA\n";
    printf("\n\n%s",str2);
#if(0)
    str[0] ='w';
    str = "I love ythahaha\n";  //�������Ըı�
    printf("\n\n%s",str);
#endif
};
int main(int argc, char *argv[]){
    //fun1();
    fun2();
    //fun3();
    return 0;
}

