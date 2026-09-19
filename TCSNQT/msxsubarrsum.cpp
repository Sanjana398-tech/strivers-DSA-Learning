#include<iostream>
using namespace std;
int maxSubArraySum(int arr[],int n){
    int sum=0;
    int maxsum=arr[0];
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>maxsum){
            maxsum=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxsum;
}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=9;
    cout<<maxSubArraySum(arr,n);
    return 0;
}