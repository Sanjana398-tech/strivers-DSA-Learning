#include<iostream>
using namespace std;
int main(){
    int arr[]={7,1,2,5,3,1,2};
    int n=7;
    cout<<"leaders are:";
    for(int i=0;i<n;i++){
        bool leader=true;
        for(int j=i+1;j<n;j++){
            if(arr[j]>=arr[i]){
                leader=false;
                break;
            }
        }
        if(leader){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}