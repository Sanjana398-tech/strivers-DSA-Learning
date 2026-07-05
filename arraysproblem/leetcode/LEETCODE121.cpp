//stock buy and sale
#include<iostream>
using namespace std;
int maxProfit(int arr[],int n){
    int maxProfit=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int profit=arr[j]-arr[i];
            if(profit>maxProfit){
                maxProfit=profit;
            }
        }
    }
    return maxProfit;
}
int main(){
    int arr[]={7,1,5,3,8,4};
    int n=6;
    cout<<"max Profit="<<maxProfit(arr,n);
    return 0;
}