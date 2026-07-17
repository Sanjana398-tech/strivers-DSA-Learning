#include<iostream>
#include<algorithm>
using namespace std;
void fourSum(int arr[],int n,int target){
    sort(arr,arr+n);
    for(int i=0;i<n-3;i++){
        if(i>0 && arr[i]==arr[i-1])
            continue;
        for(int j=i+1;j<n-2;j++){
            if(j>i+1 && arr[j]==arr[j-1])
            continue;
        
        int left=j+1;
        int right=n-1;

        while(left<right){
            int sum=arr[i]+arr[j]+arr[left]+arr[right];
            if(sum==target){
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[left]<<" "<<arr[right]<<endl;
                left++;
                right--;
                while(left<right &&arr[left]==arr[left-1])
                left++;
            while(left<right &&arr[right]==arr[right+1])
                right--;
            }
            else if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }
    }
}
}

int main(){
    int arr[]={-1,0,1,2,-1,-4};
    int n=6;
    int target=0;
    fourSum(arr,n,target);
    return 0;

}
