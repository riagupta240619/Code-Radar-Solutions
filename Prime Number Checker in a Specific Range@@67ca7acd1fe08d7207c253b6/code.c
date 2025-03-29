#include<stdio.h>
void printPrimesInRange(int a, int b){
    for(int i = a; i<b, i++){
        for(int j = a+1; j<b; j++){
            if(i%j != 0){
                printf("%d", i);
            }
        }
    }
}