#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a;
    char b[100];
    float c;
    int arr[100];
    float sum, avg;
    for (int i = 0; i<n; i++){
        scanf("%d %s %f", &a,&b, &c);
        arr[i] = c;
        sum = sum +c;
    }
    avg = sum/n;
    printf("Total Marks: %.2f", sum);
    printf("Average Marks: %.2f", avg);
    return 0;
}