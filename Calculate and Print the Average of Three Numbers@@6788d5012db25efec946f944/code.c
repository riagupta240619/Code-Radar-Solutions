#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int d;
    d = a+b+c;
    printf("Average: %.2f", d/3);
    return 0;
}