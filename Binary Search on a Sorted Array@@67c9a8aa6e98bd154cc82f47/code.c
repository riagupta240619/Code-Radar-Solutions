// Your code here...
#include <stdio.h>
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;  // Found, return index
        else if (arr[mid] < target)
            left = mid + 1;  // Search in right half
        else
            right = mid - 1; // Search in left half
    }

    return -1; // Not found
}