#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for (int i = 0; i<a; i++){
        char ch = 'A';
        for (int j = 0; j<=i;j++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}