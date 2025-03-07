#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int h = c*c;
    int s = a*a;
    int s2 = b*b;
    int sum = s+s2;
    if (h==sum){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}