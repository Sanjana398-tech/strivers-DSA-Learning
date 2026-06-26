#include<iostream>
using namespace std;
int maxlen(int arr[],int n){
    int maxlength=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(sum==0){
                if(j-i+1 > maxlength){
                    maxlength=j-i+1;
                }
            }
        }
    }
    return maxlength;
}
int main(){
    int arr[]={9,-3,3,-1,6,-5,0};
    int n=7;
    cout<<"maxlength="<<maxlen(arr,n);
    return 0;
}