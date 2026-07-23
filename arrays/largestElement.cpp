#include<bits/stdc++.h>
using namespace std;
int sortArray(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
int main(){
    vector<int> arr={1,2,4,5,3};
    cout<<"largest element in the given array was:"<<sortArray(arr)<<endl;
    return 0;
}