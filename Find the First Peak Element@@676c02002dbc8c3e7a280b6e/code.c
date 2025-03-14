#include<stdio.h>
int main(){
    int n;
    lst[n];
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        scanf("%d", &lst[i]);
    }
    if (lst[i]>lst[i-1] && lst[i]>lst[i+1]){
        printf("%d", lst[i]);
    }
    else{
        printf("-1");
    }
}