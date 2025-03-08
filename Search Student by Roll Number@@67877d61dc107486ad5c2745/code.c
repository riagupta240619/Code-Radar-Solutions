#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a;
    char b[100];
    float c;
    int arr[100];
    float sum, avg;
    int x;
    for (int i = 0; i<n; i++){
        scanf("%d %s %f", &a,&b, &c);
        arr[i] = a;
    }
    scanf("%d", &x);
    if (arr[i] == x){
        printf("Roll Number: %d, Name: %s, Marks: %f", x, b, c);
    }
    else{
        printf("Student not found");
    }
    return 0;
}