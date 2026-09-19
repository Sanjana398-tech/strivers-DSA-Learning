#include<iostream>
using namespace std;
void moveZeroes(int arr[],int n){
    int temp[100];
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[j]=arr[i];
            j++;
        }
    }
    while(j<n){
        temp[j]=0;
        j++;
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}
int main(){
    int arr[]={0,1,0,3,12};
    int n=5;
    moveZeroes(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}