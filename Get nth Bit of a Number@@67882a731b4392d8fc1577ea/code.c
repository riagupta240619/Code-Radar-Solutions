#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    bt bit = (a >> b) & 1;
    printf("%d\n", bit);
}