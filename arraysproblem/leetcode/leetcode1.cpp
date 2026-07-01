#include<iostream>
using namespace std;
string twosumexists(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                return "true";
            }
        }
    }
    return "false";
}
string twosumindices(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                return to_string(i) + "," + to_string(j);
            }
        }
    }
    return "-1,-1";
}
int main(){
    int arr[]={11,7,2,15};
    int n=4;
    int target=9;
    cout<<"twosumexists="<<twosumexists(arr,n,target);
    cout<<"twosumindices="<<twosumindices(arr,n,target);
    return 0;
}