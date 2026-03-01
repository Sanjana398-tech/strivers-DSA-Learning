#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int printNumbers(int N){
        int sum=0;
        for(int i=1;i<=N;i++){
            sum+=i;
        }
        return sum;
    }
};
int main(){
    Solution obj;
    int N=10;
    int result=obj.printNumbers(N);
    cout<<result<<"\n";
    
    return 0;
}
    

    