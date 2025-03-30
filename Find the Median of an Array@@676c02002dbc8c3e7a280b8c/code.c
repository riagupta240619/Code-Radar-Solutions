#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n ;i++){
        scanf("%d", &arr[i]);
    }
    if (n%2 != 0){
        return arr[n/2];
    }
    else{
        return (arr[(n/2)-1] + arr[n/2])/2;
    }
}