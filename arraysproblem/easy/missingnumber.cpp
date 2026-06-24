#include<iostream>
using namespace std;
int missingNumber(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int total=(n+1)*(n+2)/2;
    int missing=total-sum;
    return missing;
}
int main(){
    int arr[]={8,2,1,4,5,3,7};
    int n=7;
    cout<<missingNumber(arr,n);
    return 0;
}