#include <stdio.h>

int main() {
    char arr[20], arr1[20];
    scanf("%s %s", &arr, &arr1);
    char a;
    scanf("%s", &a);
    printf("Name: %s", arr);
    printf("Age: %s", arr1);
    printf("Hobby: %s", a);
    return 0;
}