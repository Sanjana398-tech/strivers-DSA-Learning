//sort colors
#include<iostream>
using namespace std;
void sortArray(int arr[],int n){
    int zero=0,one=0,two=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero++;
        }
            else if(arr[i]==1){
                one++;
            }
                else{
                    two++;
                }
            }
            
            int i=0;
            while(zero--)
            arr[i++]=0;
        while(one--)
        arr[i++]=1;
    while(two--)
    arr[i++]=2;
        }
    
        int main()
        {
            int arr[]={1,0,2,1,0,1};
            int n=6;
            sortArray(arr,n);
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            return 0;
        }
    
