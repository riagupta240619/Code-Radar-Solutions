#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int lst[n],lst2[n];
    for (int i = 0; i<n;i++){
        scanf("%d", &lst[i]);
    }
    int a;
    scanf("%d", &a);
    a = a%n;
    for (int i = 0;i<n;i++){
        lst2[(i+a)%n] = lst[i];
    }
    for (int i = 0;i <n; i++){
        printf("%d", lst[i]);
    }
}