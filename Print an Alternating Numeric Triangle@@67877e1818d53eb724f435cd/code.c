#include <stdio.h>

int main() {
    int n, num = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = ; j <= i; j++) {
            printf("%d ", (i+j)%2);
            num++;
        }
        printf("\n");
    }
    return 0;
}
