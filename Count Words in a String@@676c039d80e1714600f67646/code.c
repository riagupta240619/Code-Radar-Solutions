#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]", &str);
    int w = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            w++;
        }
    }
    printf("%d\n", w + 1);
    return 0;
}