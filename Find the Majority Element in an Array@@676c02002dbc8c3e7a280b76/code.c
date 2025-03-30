#include<stdio.h>
int frequency(int arr[], int n){
    int visited[n];
    int arr1[];
    int count = 1;
    for(int i =0; i<n; i++){
        if (visited[i] == 1){
            continue;
        }
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
                visited[i] = 1;
            }
        }
        arr1[i] = count;
    }
}
void bubble_Sort(int arr1[], int n){
    for(int i = 0; i<n; i++){
        for(int j = i+1;j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d", arr[n-1]);
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[i];
    for(int i = 0;i<n; i++){
        scanf("%d", &arr[i]);
    }
    frequency(arr, n);
    return 0;
}