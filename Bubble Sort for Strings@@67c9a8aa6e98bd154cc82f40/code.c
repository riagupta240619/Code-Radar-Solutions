#include<stdio.h>
#include<string.h>
void bubbleSort(char arr[][100], int n){
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n-1; j++){
            if (strcmp(arr[j],arr[j+1])>0){
                char temp[100];
                strcmp(temp,arr[j]);
                strcmp(arr[j], arr[j+1]);
                strcmp(arr[j+1], temp);
            }
        }
    }
}
void printArray(char arr[][100], int n){
    for (int i = 0; i<n; i++){
        printf("%s\n", arr[i]);
    }
}