#include<stdio.h>
#include<string.h>
#include<ctype.h>
void caesarCipher(char msg[100], int n, char enc[100]){
    int i;
    for(i = 0;msg[i] != '\0';i++){
        char ch = msg[i];
        if(isalpha(ch)){
            char base = isupper(ch) ? 'A' : 'a';
            enc[i] = (ch - base + n)%26 + base;
        }
        else{
            enc[i] = ch;
        }
    }
    enc[i] = '\0';
}