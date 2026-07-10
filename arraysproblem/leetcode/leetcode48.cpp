#include<iostream>
using namespace std;
void rotateMatrix(int arr[][3],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        int start=0;
        int end = n-1;
        while(start<end){
            int temp=arr[i][start];
            arr[i][start]=arr[i][end];
            arr[i][end]=temp;
            start++;
            end--;
        }
    }
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    rotateMatrix(arr,3);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}