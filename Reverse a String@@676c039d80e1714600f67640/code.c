#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    gets(str);
    printf("%s", strrev(str));
    return 0;
}