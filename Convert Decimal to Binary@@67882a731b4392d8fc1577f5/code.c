#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if (n==0){
        printf("0");
    }
    else{
        int arr[50];
        int i = 0;
        while (n > 0) {
            arr[i] = n % 2;
            n /= 2;
            i++;
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", arr[j]);
        }
    }
    return 0;
}