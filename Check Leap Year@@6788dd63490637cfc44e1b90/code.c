#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    ifif(a%400 == 0 && a%100 == 0 || a%4 == 0){
        printf("Leap year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}