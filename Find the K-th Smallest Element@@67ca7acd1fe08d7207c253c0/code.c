#include<stdio.h>
int kthSmallest(int arr[], int n, int k){
    if(k<n){
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n;j++){
                if(arr[i]<arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        printf("%d", arr[k]);
    }
    return -1;
}