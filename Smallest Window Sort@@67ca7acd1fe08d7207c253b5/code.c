#include <stdio.h>
int findUnsortedSubarray(int arr[], int n) {
    int start = -1, end = -1;
    int maxSeen = arr[0], minSeen = arr[n-1];
    for (int i = 1; i < n; i++) {
        if (arr[i] < maxSeen) {
            end = i;
        } else {
            maxSeen = arr[i];
        }
    }
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > minSeen) {
            start = i;
        } else {
            minSeen = arr[i];
        }
    }
    if (start == -1) return 0;

    return end - start + 1;
}