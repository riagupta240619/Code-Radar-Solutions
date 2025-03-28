#include<stdio.h>
void bubble_sort(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void print_func (int arr[], int n){
    printf("%d ", arr[0]);
    printf("%d", arr[n-1]);
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, n);
    print_func(arr, n);
}