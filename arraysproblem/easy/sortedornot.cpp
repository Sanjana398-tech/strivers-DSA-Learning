#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n=5;
    int arr[]={1,2,3,6,5};
    if(isSorted(arr,n)){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
}