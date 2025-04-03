#include <stdio.h>

void frequency(int arr[], int n, int arr1[]) {
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
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
void bubble_Sort(int arr1[], int n) {
    for (int i = 0; i < n ; i++) {
        for (int j = i+1; j < n ; j++) {
            if (arr1[i] > arr1[j]) {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n], arr1[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    frequency(arr, n, arr1);
    bubble_Sort(arr1, n);
    printf("%d\n", arr1[n - 1]);
    return 0;
}
