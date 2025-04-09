#include<stdio.h>
int searchInRotatedArray(int arr[], int n, int target){
    int e = 0;
    for(int i = 0;i<n;i++){
        if (arr[i] == target){
            return i; 
            e++;
        }
        // return -1;
    } 
    // return -1;
    if (e == 0) {
        return -1;
    }
}