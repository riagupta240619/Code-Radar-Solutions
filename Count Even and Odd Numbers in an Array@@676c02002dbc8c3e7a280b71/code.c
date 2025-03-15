#include<stdio.h>
int main(){
    int n, even = 0, odd = 0;
    scanf("%d",&n);
    int lst[n];
    for (int i = 0; i<n; i++){
        scanf("%d", &lst[i]);
        if (lst[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d", even, odd);
    return 0;
}