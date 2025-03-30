#include<stdio.h>
void rotate(int arr[], int n, int k){
    int lst[n];
    k = k%n;
    for(int i= 0; i<n; i++){
        lst[i] = arr[(i-k+n)%n];
    }
    for(int i= 0; i<n; i++){
        arr[i] = lst[i];
    }
    for(int i= 0; i<n; i++){
        printf("%d ", lst[i]);
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    rotate(arr,n, k);
    return 0;
}