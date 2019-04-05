#include <stdio.h>
//1001
int main(int argc, char *argv[]) {
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    while (a != 1){
        if (0 == a % 2) {
            a = a / 2;
        } else {
            a = (3 * a + 1) / 2;
        }
        b++;
    }
    printf("%d",b);
    return 0;
}

