#include<iostream>
using namespace std;
string twosumexists(int arr[],int target,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target)
            return "YES";
        }

    }
    return "NO";
}
int twosumindex(int arr[],int target,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target)
            return {arr[i,j]};
        }

    }
    return {-1};
}
int main(){
    int arr[]={1,2,4,3,6};
    int n=5;
    int target=10;
    cout<<twosumexists(arr,n,target);
    cout<<twosumindex(arr,n,target);
    return 0;

}