#include<iostream>
using namespace std;
int maxSubarray(int arr[],int n){
    int sum=0;
    int maxSum=arr[0];
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>maxSum){
            maxSum=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxSum;

}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=9;
    cout<<"maximum subarray sum="<<maxSubarray(arr,n);
    return 0;
}