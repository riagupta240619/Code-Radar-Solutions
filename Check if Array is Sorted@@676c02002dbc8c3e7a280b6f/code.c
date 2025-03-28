#include<stdio.h>
int bubble_sort(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n;j++){
            if(arr[i]<arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return 0;
}
void check_if_same(int arr[]; int lst[]; int n){
    for(int i = 0; i<n; i++){
        if(arr[i] == arr1[i]){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int lst[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &lst[i]);
    }
    bubble_sort(lst,n);
    check_if_same(arr, lst,n);
    return 0;
}