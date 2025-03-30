#include<stdio.h>
void frequency(int arr[], int n){
    int visited[n];
    for(int i =0; i<n;i++){
        if(visited[i] == 1)
            continue;
        int count = 1;
        for(int j = i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] = 1;
            }
        }
        printf("%d %d", arr[i], count);
    }
}
int main(){
    int n;
    int arr[n];
    for(int i= 0;i<n; i++){
        scanf("%d", &arr[i]);
    }
    frequency(arr,n);
    return 0;
}