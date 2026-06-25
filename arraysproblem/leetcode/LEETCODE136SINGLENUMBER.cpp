#include<iostream>
using namespace std;
int singleNumber(int arr[],int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count == 1){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int n=3;
    int arr[]={2,1,1};
    cout<<singleNumber(arr,n);
    return 0;
}