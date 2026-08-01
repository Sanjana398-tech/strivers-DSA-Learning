#include<iostream>
#include<algorithm>
using namespace std;
void secondLargeSmall(int arr[],int n)
{
    sort(arr,arr+n);
    cout<<"second largest element="<<arr[n-2]<<endl;
    cout<<"second smallest element="<<arr[1]<<endl;
}
int main()
{
    int arr[]={1,5,2,7,3,6};
    int n=6;
    secondLargeSmall(arr,n);
    return 0;
}