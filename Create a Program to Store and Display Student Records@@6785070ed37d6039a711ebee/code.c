#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a;
    char b;
    float c;
    for (int i = 0; i<n; i++){
        scanf("%d %s %f", &a,&b, &c);
        printf("Roll Number: %d, Name: %s, Marks: %f", a,b,c);
    }
}