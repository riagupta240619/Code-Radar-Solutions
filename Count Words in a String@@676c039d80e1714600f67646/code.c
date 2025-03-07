#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]s", str);
    int words = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            words++;
        }
    }
    printf("Words = %d\n", words + 1);
    return 0;
}