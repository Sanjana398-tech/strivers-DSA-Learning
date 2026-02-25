#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    void print_Name(string name,int count,int N){
        if(count == N)
            return;
            cout<<name<<"\n";
            print_Name(name,count+1,N);
        
    }
};
int main(){
    Solution sol;
    int N=5;
    string name="sanjana";
    sol.print_Name(name,0,N);
    return 0;
}