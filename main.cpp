#include <stdio.h>
//�ṹ��Ƕ��
struct date{
    int month;
    int day;
    int year;
} birthday;
//������birthday ����һ�� birthday
struct {
    int num;
    char sex;
    int age;
}student1,student2;
//�ṹ�������
int main(int argc, char *argv[]){
    /**
     * �ṹ�������������   �ṹ����Ҫ��ȡ��ַ���ŵõ���ַ   ���鲻��Ҫ ֱ�Ӿ��ǵ�ַ �����������������Ԫ�ز�ͬ�������ģ�
     *
     * ��ȡ��ַ��������Ҳ�и����Ĳ�ͬ��������������ʹ����׵�ַ������+1��+2�����Ϳ��Ա�ʾ����Ԫ�صĵ�ַ��
     * ����Ҫʹ��ȡ��ַ�����&�����ṹ����ֻ��һϵ�в�ͬ����Ԫ�صļ��ϣ�������ֻ�ǰѺܶ����͵�Ԫ�ط���һ��
     * ����Ӧ�����������������ݵ�λ������һ��ѧ���ĳɼ���Ϣ���̼ҵĹ˿���Ϣ�ȣ��Ĵ洢��ʽ������ȡ��ַ��Ȼ��Ҫ��
     * ��ȡ��ַ���㡣
     *
     *   ���ߵķ��ʷ�ʽҲ��ͬ���������ֱ�������±���ʣ����ṹ����ʹ�ýṹ�г�Ա�ı�������
     *   �ṹ�Ķ���һ��������������棬�������������Ϳ���ʹ���������͵Ľṹ�������Ľṹ�������������ڶ����ʹ��
     *   ����Ϊ�򵥣�����ֱ������Ҫʹ�õĺ����ж��弴�ɡ�
     *   ---------------------
     *  ���ߣ���������ɡ
     *   ��Դ��CSDN
     *   ԭ�ģ�https://blog.csdn.net/zhanshen112/article/details/80429861
     *   ��Ȩ����������Ϊ����ԭ�����£�ת���븽�ϲ������ӣ�
     */
    student1.num = 007;
    student1.sex = 'm';
    student1.age = 001;
    student2 = student1;  //����������һ������
    //student1  =  student1.num    ���Ǽ� &��ַ����

    printf("student1 :%d  %d  %c %o \n", student1.num, student1.age, student1.sex, &student1);
    printf("student2 :%d  %d  %c %o \n", student2.num, student2.age, student2.sex, &student2);
    int a[] ={1,2,3,4,5};
    printf("a[] = %o\n",a);
    return 0;
}

