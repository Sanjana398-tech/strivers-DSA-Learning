#include<iostream>
#include<unordered_map>
using namespace std;
int subArraySum(int arr[],int n,int k){
    unordered_map<int,int>mp;
    int prefixSum=0;
    int count=0;
    mp[0]=1;
    for(int i=0;i<n;i++){
        prefixSum=prefixSum+arr[i];
        int remove=prefixSum-k;
        if(mp.find(remove)!=mp.end()){
            count=count+mp[remove];
        }
        mp[prefixSum]++;
    }
    return count;
}
int main(){
    int arr[]={1,2,3,4,5,8};
    int n=6;
    int k=9;
    cout<<"sum="<<subArraySum(arr,n,k);
    return 0;
}