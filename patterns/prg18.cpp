#include<bits/stdc++.h>
using namespace std;
void prg18(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n=5;
    prg18(n);
    return 0;
}