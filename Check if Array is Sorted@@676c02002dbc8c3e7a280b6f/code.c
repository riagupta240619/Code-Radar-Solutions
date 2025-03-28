#include<stdio.h>
int bubble_sort(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n;j++){
            if(arr[i]<arr[i+1]){
                printf("Sorted");
            }
            else{
                printf("Not Sorted");
            }
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int lst[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &lst[i]);
    }
    bubble_sort(lst,n);
    return 0;
}