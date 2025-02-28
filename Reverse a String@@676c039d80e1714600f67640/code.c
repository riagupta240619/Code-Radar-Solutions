#include<stdio.h>
int main(){
    char str[50];
    gets(str);
    return str[::1];
}