#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {8,9,10,11,12};
    int i=0,j=0;

    while(i<5 && j<5){
        if(arr1[i] < arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i] > arr2[j]){
            cout<<arr2[j]<<" ";
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }

        
    }
    while(i<5){
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<5){
        cout<<arr2[j]<<" ";
        j++;
    }
    return 0;
}