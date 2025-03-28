#include<stdio.h>
int fibonacciSeries(int n){
    if(n == 0 || n == 1){
        printf("0");
    }
    else{
        printf("%d", fibonacciSeries(n-1) + fibonacciSeries(n-2));
    }
    return 0;
}