//rearrange array elements by sign
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,-4,-5,6,-1};
    int n=6;
    int ans[6];
    int pos=0;
    int neg=1;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            ans[pos]=arr[i];
            pos=pos+2;
        }
        else{
            ans[neg]=arr[i];
            neg=neg+2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}