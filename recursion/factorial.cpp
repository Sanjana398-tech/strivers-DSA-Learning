#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
int factorial(int x){
    int ans=1;
    for(int i=1;i<=x;i++){
        ans=ans*i;
    }
    return ans;
}
};
int main(){
    Solution obj;
    int x=5;
    int result=obj.factorial(x);
    cout<<result<<"\n";
    return 0;
}