#include<iostream>
using namespace std;
int largestSubArray(int arr[],int n,int k){
    int left=0;
    int sum=0;
    int maxlen=0;
    for(int right=0;right<n;right++){
        sum=sum+arr[right];
        while(sum>k){
            sum=sum-arr[left];
            left ++;
        }
        if(sum==k){
            if(right-left+1 > maxlen){
                maxlen=right-left+1;
            }        }
    }
    return maxlen;
}
int main(){
    int arr[]={10,5,2,7,1,9};
    int n=6;
    int k=15;
    int res=largestSubArray(arr,n,k);
    cout<<"largest subarray which gives sum 15 ="<<res;
    return 0;
}