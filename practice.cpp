// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
             
//         }
//         cout<<'*'<< " ";
       
//         cout<<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void linearsearch(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==n)
//         {
//             cout<<"element found at index "<<i;
//         }
//     }

// }
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     linearsearch(arr,n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     int temp=arr[0];
//     for(int i=1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
//     cout<<"After left rotation the array is: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int consecutiveones(int arr[],int n){
//     int count =0;
//     int max=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==1){
//             count=count+1;
    

//         }
//         else{
//             count=0;
//         }
//         if(count>max){
//             max=count;
        
//     }
// }
// return max;
// }
// int main(){
//     int arr[]={1,1,0,1,1,1,0,1};
//     int n=8;
//     int result=consecutiveones(arr,n);
//     cout<<"The maximum number of consecutive ones is: "<<result;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void moveZeroes(vector<int>& nums) {

//     int j = 0;

//     for(int i = 0; i < nums.size(); i++) {

//         if(nums[i] != 0) {

//             swap(nums[i], nums[j]);

//             j++;
//         }
//     }
// }

// int main() {

//     vector<int> nums = {0,1,0,3,12};

//     moveZeroes(nums);

//     for(int x : nums) {
//         cout << x << " ";
//     }

//     return 0;
// }

//missing number in an array
// #include<iostream>
// using namespace std;
// int missingnu(int arr[],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];

//     }
//     int total=(n+1)*(n+2)/2;
//     int result=total-sum;
//     return result;


// }
// int main(){
//     int arr[]={1,2,3,5};
//     int n=4;
//     int result=missingnu(arr,n);
//     cout<<"The missing number is: "<<result;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int singlenum(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count==1){
//             return arr[i];
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={1,2,3,2,1};
//     int n=5;
//     int result=singlenum(arr,n);
//     cout<<"The single number is: "<<result;
//     return 0;
// }

#include<iostream>
using namespace std;
int merge(int arr[],int n,int arr2[],int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(arr[i]<arr2[j]){
            cout<<arr[i]<<" ";
            i++;
        }
        else{
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }
    while(j<m){
        cout<<arr2[j]<<" ";
        j++;
    }
}
int main(){
    int arr[]={1,3,5,7};
    int n=4;
    int arr2[]={2,4,6,8};
    int m=4;
    cout<<"The merged array is: ";
    merge(arr,n,arr2,m);
    return 0;
}