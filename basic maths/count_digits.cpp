#include<bits/stdc++.h>
using namespace std;
int count(int n){
    int cnt=0;
    while(n > 0){
        int lastDig=n % 10;
        cnt++;
        n=n / 10;
    }
    return cnt;
}
int main(){
    int n=23456;
    cout<<count(n);
    return 0;
}