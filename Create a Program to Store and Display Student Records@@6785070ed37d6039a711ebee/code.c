#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a;
    char b[100];
    float c;
    for (int i = 0; i<n; i++){
        scanf("%d %s %f", &a,&b, &c);
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", a,b,c);
    }
    return 0;
}