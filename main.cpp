#include<stdio.h>
/**
 * Ӧ�ò�����long
 * ���ǱȽ��ڲ����Զ�ת��Ϊ int -> long  �Ƚϴ�СӦ�þͿ��ԱȽ���
 */
 //1011 A+B �� C
int main() {
    int num = 0;
    long a, b, c;
    scanf("%d",&num);
    for(int i =1; i <= num; i++){
        scanf("%ld %ld %ld", &a, &b, &c);
        if(a + b > c){
            printf("Case #%d: true\n", i);
        }else{
            printf("Case #%d: false\n", i);
        }
    }


    return 0;
}
