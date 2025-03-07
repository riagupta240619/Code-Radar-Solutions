#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",&str);
    int len = 0;
    char reversed_string[100];
    while (str[len] != '\0') len++;
    for (int i = len - 1; i>=0; i--){
        reversed_string[j] = str[i];
    }
    printf("%s", reversed_string);
    return 0;
}