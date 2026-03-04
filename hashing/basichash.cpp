#include <bits/stdc++.h>
using namespace std;

int main() {

    int n=10;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q=5;
    
    while (q--) {
        int number=5 ,6, 7, 8, 9;
        
        // fetching:
        cout << hash[number] << endl;
    }
    return 0;
}