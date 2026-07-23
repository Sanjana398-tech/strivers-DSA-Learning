#include <bits/stdc++.h>
using namespace std;

void checkSorted(vector<int>& arr) {
    vector<int> temp = arr;      // Make a copy of the original array

    sort(temp.begin(), temp.end()); // Sort the copied array

    if (arr == temp) {
        cout << "Array is sorted";
    }
    else {
        cout << "Array is not sorted";
    }
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 3};

    checkSorted(arr);

    return 0;
}