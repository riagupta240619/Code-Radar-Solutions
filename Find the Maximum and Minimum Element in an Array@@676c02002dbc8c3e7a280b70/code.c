#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int lst[n];
    for (int i = 0; i<n; i++){
        scanf("%d", &lst[i]);
    }
    int first = 1;
    for(int i = 1; i<n-1; i++){
        if (lst[i]>lst[i-1] && lst[i]>lst[i+1]){
            if (!first) {
                printf(" ");
            }
            printf("%d", lst[i]);
            first = 0;
        }
    }
    return 0;
}