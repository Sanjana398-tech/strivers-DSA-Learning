//majority element, optimal solution was moore's voting algorithm

#include<bits/stdc++.h>
using namespace std;
int majorityElement(int arr[],int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count> n/2){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int arr[]={7,0,0,1,7,7,2,7,7};
    int n=9;
    cout<<"majority element was="<<majorityElement(arr,n);
    return 0;
}