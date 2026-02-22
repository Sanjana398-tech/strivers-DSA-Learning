#include<bits/stdc++.h>
using namespace std;
int revNo(int n){
    int rev=0;
    while(n > 0)
{
    int num=n %10;
    rev=(rev*10)+num;
    n=n/10;
}
return rev;
}
int main(){
    int n=12345;
    cout<<revNo(n);
    return 0;
}