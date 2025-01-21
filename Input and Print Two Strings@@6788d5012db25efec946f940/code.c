#include <stdio.h>

int main() {
    char str[20], str1[10];
    gets(str);
    gets(str1);
    printf("You entered: %s and %s", str, str1);
    return 0;
}