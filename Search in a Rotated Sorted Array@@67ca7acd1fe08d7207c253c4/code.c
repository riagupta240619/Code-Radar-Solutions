#include<stdio.h>
int searchInRotatedArray(int arr[], int n, int target){
    int e = 0;
    for(int i = 0;i<n;i++){
        if (arr[i] == target){
            printf("%d", i);
            e++;
        }
    } 
    // if (e == 0) {
    //     return -1;
    // }
}