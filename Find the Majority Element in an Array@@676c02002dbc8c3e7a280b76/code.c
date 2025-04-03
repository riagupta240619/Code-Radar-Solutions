#include <stdio.h>

void frequency(int arr[], int n, int arr1[]) {
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        arr1[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        arr1[i] = count;
    }
}
int find_max(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n], arr1[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    frequency(arr, n, arr1);
    int max_freq = find_max(arr1, n);
    printf("%d\n", max_freq);
    return 0;
}
