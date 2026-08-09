#include<iostream>
using namespace std;
int countXOR(int arr[],int n,int B){
    int count=0;
    for(int i=0;i<n;i++){
        int XORvalue=0;
        for(int j=i;j<n;j++){
            XORvalue=XORvalue^arr[j];
            if(XORvalue==B){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int arr[]={4,2,2,6,4};
    int n=5;
    int B=6;
    int result=countXOR(arr,n,B);
    cout<<"The number of subarrays with given XOR is: "<<result;
    return 0;
}