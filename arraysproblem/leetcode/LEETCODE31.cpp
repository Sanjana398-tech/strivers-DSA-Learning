#include<iostream>
#include<algorithm>
using namespace std;
void nextPermutation(int arr[],int n){
    int index=-1;
    //find break point
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index=i;
            break;
        }
    }
    //if no break point reverse whole array
    if(index==-1){
        reverse(arr,arr+n);
        return;
    }
    //find next greatest element
    for(int i=n-1;i>index;i--){
        if(arr[i]>arr[index]){
            swap(arr[i],arr[index]);
            break;
        }
    }
    //reverse the remaining part
    reverse(arr+index+1,arr+n);
}
int main(){
    int arr[]={4,5,8,6,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    nextPermutation(arr,n);
    cout<<"next permutation= ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
