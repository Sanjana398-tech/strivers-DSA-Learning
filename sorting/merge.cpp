#include <bits/stdc++.h>
using namespace std;

// Merge function
void merge(int arr[], int low, int mid, int high) {
    int temp[100]; // adjust size if needed
    int left = low, right = mid + 1;
    int k = low;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right])
            temp[k++] = arr[left++];
        else
            temp[k++] = arr[right++];
    }

    while (left <= mid)
        temp[k++] = arr[left++];

    while (right <= high)
        temp[k++] = arr[right++];

    for (int i = low; i <= high; i++)
        arr[i] = temp[i];
}

// Merge Sort function
void mergeSort(int arr[], int low, int high) {
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    int arr[] = {5, 2, 8, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;}