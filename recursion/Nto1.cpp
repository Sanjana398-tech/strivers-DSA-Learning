#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void printNumbers(int current){
        if(current<1)
        return;

        cout<<current<<"\n";
        printNumbers(current-1);
    }
};
int main(){
    Solution sol;
    int n=10;
    sol.printNumbers(n);
    cout<<"\n";
    return 0;
}