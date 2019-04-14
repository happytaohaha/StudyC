#include<stdio.h>
/**
 * 不知道为什么我这个编译不通过
 */
 //1018 锤子剪刀布
 struct Person{
     int B = 0;
     int C = 0;
     int J = 0;
     int win = 0;
     int lose = 0;
     int  flat= 0;
 } person1,person2;
 int compleCJB(char a, char b){
   if(a == 'J'){
       switch (b){
           case 'B':
               return 1;
           case 'C':
               return -1;
           default:
               return 0;
       }
   }else if(a == 'B'){
       switch (b){
           case 'C':
               return 1;
           case 'J':
               return -1;
           default:
               return 0;
       }
   }else{
       switch (b){
           case 'J':
               return 1;
           case 'B':
               return -1;
           default:
               return 0;
       }
   }
 };
void addResult(Person &personA,Person &personB, int result, char a, char b){
    if(result==1){
        personA.win ++;
        personB.lose ++;
        if(a =='J'){
            personA.J++;
        }else if(a == 'C'){
            personA.C++;
        }else{
            personA.B++;
        }
    }else if(result ==0){
        personA.flat ++;
        personB.flat ++;
    }else{
        personA.lose ++;
        personB.win ++;
        if(b =='J'){
            personB.J++;
        }else if(b == 'C'){
            personB.C++;
        }else{
            personB.B++;
        }
    }
}

char  complePerson(Person &person){
    if(person.J >person.C){
        if(person.J>person.B)
        {
            return 'J';
        }else{
            return 'B';
        }
    }else{
        if(person.C>person.B){
            return 'C';
        }else{
            return 'B';
        }
    }
}
// 1018 锤子剪刀布
int main(){
    int N = 0;
    scanf("%d",&N);
    char a,b;
    int result;
    for(int i = 0; i < N; i++){
        scanf(" %c %c", &a, &b);
        result= compleCJB( a, b);
        addResult( person1, person2, result, a, b);
    }
    char res1 =complePerson(person1);
    char res2 =complePerson(person2);
    printf("%d %d %d\n", person1.win, person1.flat, person1.lose);
    printf("%d %d %d\n", person2.win, person2.flat, person2.lose);
    printf("%c %c", res1, res2);
    return 0;
}

