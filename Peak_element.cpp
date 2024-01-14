#include <iostream>
using namespace std;

int findPeakElement(int arr[], int low, int high, int n) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if arr[mid] is a peak element
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid])) {
            return mid;
        }

        // If the element to the right of mid is greater, then there is a peak element on the right
        if (mid < n - 1 && arr[mid + 1] > arr[mid]) {
            low = mid + 1;
        } else {
            // If the element to the left of mid is greater, then there is a peak element on the left
            high = mid - 1;
        }
    }

    // If the loop ends without finding a peak element, return -1
    return -1;
}

int peakElement(int arr[], int n) {
    int peakIndex = findPeakElement(arr, 0, n - 1, n);

    // Return the index of the peak element
    return peakIndex;
}

int main() {
    // Example usage
    int arr1[] = {1, 2, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int result1 = peakElement(arr1, n1);
    cout << "Output 1: " << result1 << endl;

    int arr2[] = {3, 4, 2};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int result2 = peakElement(arr2, n2);
    cout << "Output 2: " << result2 << endl;

    return 0;
}
