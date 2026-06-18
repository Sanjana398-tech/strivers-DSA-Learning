#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[],int n){
    int k=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[k-1]){
            arr[k]=arr[i];
            k++;
        }
    }
    return k;
}
int main(){
    int n=5;
    int arr[]={1,1,2,2,3};
    int k=removeDuplicates(arr,n);
    cout<<"The new length of the array is: "<<k<<endl;
    cout<<"The modified array is: ";
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}