#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=5;
    int arr[n]= {3,2,1,5,2};
    int largest= arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > largest)
        largest = arr[i];
    }
    int slargest = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > slargest && arr[i] != largest)
        slargest=arr[i];
    }
    cout<<"2nd largest"<<slargest;
    return 0;
}