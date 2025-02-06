#include <stdio.h>

int main() {
    char arr[20], arr1[20];
    char a;
    scanf("%s %s", &arr, &arr1);
    scanf("%s", &a);
    printf("Name: %s", arr);
    printf("Age: %s", arr1);
    printf("Hobby: %s", a);
    return 0;
}