#include<iostream>
using namespace std;
int search(int arr[],int n,int num){
    for(int i=0;i<n;i++){
        if(arr[i] == num)
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int num=4;
    int result=search(arr,5,4);
    cout<<result;
    return 0;
}