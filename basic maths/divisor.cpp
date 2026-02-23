#include<bits/stdc++.h>
using namespace std;
int divisor(int n){
    for(int i=1;i<=n;i++){
        if(n % i == 0 ){
            cout<<i<<" ";
        }

    }   
    return 0;
}
int main(){
    int n=36;
    divisor(n);
    return 0;
}