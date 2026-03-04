#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){   // fixed loop condition
        int mini = i;
        for(int j = i + 1; j < n; j++){  // start from i+1
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);  // cleaner swap
    }
}

int main(){
    int n = 10;
    int arr[n] = {10, 2, 34, 5, 67, 2, 1, 23, 90, 80};  // correct initialization

    selection_sort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}