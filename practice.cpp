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

#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {

    int j = 0;

    for(int i = 0; i < nums.size(); i++) {

        if(nums[i] != 0) {

            swap(nums[i], nums[j]);

            j++;
        }
    }
}

int main() {

    vector<int> nums = {0,1,0,3,12};

    moveZeroes(nums);

    for(int x : nums) {
        cout << x << " ";
    }

    return 0;
}