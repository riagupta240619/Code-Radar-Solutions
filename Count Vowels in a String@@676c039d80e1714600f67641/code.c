#include<stdio.h>
int main(){
    char str[100];
    scanf("%d", &str);
    int v = 0;
    if (int i = 0; str[i] !=0; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
    }
    printf("%d", v);
}