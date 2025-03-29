#include<stdio.h>
int binarySearch(int arr[], int n, int target){
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] == target){
                return i;
            }
            else{
                return -1;
            }
        }
    }
    return 0;
}