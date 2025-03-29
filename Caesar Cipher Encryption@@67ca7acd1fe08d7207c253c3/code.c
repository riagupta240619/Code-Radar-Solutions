#include<stdio.h>
#include<string.h>
#include<ctype.h>
void caesarCipher(char msg[100], int n, char enc[100]){
    for(int i = 0;i<strlen(msg);i++){
        char ch = msg[i];
        if(isalpha(ch)){
            char base = isupper ? 'A' : 'a';
            enc[i] = (ch - base + n);
        }
        else{
            enc[i] = ch;
        }
    }
    enc[strlen(msg)] = '\0';
}