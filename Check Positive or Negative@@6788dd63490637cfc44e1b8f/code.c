#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a<0){
        printf("Negative");
    }
    elseif(a>0){
        printf("Positive");
    }
    else{
        printf("Zero");
    }
    return 0;
}