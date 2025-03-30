#include<stdio.h>
void frequency(int arr[], int n){
    int visited[n];
    int arr1[];
    for(int i =0; i<n; i++){
        if (visited[i] == 1){
            continue;
        }
        int count = 1;
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] = 1;
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
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[i], arr1[n];
    for(int i = 0;i<n; i++){
        scanf("%d", &arr[i]);
    }
    frequency(arr, n);
    bubble_Sort(arr1, n);
    return 0;
}