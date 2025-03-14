#include<stdio.h>
int main(){
    int n;    
    scanf("%d", &n);
    int lst[n];
    for (int i = 0; i<n+1; i++){
        scanf("%d", &lst[i]);
    }
    for (int i = 1; i<n;i++){
        if (lst[i]>lst[i-1] && lst[i]>lst[i+1]){
            printf("%d", lst[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}