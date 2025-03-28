#include<stdio.h>
void fibonacciSeries(int n){
    if(n == 0 || n == 1){
        return 0;
    }
    else{
        return fibonacciSeries(n-1) + fibonacciSeries(n-2);
    }
}