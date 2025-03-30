#include<stdio.h>
void bubble_sort(int arr[], int n){
    if (n <= 1) {
        printf("-1");
        return;
    }
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if(arr[n-2] == arr[n-1] && arr[n-2] == arr[n-3]){
        printf("-1");
        return;
    }
    printf("%d", arr[n-2]);
    
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, n);
    return 0;
}