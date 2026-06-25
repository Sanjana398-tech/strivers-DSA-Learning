#include<iostream>
using namespace std;
int CountMaxConOnes(int arr[],int n){
    int cnt=0;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            cnt++;
        }
        else cnt = 0;

        if(cnt > max){
            max=cnt;
        }
    }
    return max;
}
int main(){
    int n=8;
    int arr[]={1,1,0,0,1,1,1,1};
    int res=CountMaxConOnes(arr,n);
    cout<<"Maximum consecutive ones:"<<res;
    return 0;
}