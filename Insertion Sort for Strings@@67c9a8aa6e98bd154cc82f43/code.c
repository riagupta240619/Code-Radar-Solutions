#include<stdio.h>
#include<string.h>
void insertionSort(char arr[][100], int n){
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n-i-1; j++){
            if (strcmp(arr[j],arr[j+1])>0){
                char temp[100];
                strcpy(temp,arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}
void printArray(char arr[][100], int n){
    for (int i = 0; i<n; i++){
        printf("%s\n", arr[i]);
    }
}