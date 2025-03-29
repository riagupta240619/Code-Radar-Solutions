#include<stdio.h>
#include<string.h>
#include<ctype.h>
void caesarCipher(char msg[100], int n, char enc[100]){
    for(int i = 0;i<n;i++){
        msg[i] = msg[i + n];
    }
    for(int i = 0; i<n; i++){
        msg[i] = enc[i];
    }
}