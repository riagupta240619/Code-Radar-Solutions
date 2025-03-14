#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int lst[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &lst[i]);
    }
    int sorted = 1;
    for (int i = 0; i<n; i++){
        if (lst[i]<lst[i-1]){
            sorted = 0;
            break;
        }
    }
    if (sorted){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}