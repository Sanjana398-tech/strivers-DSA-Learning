#include<bits/stdc++.h>
using namespace std;
int revNo(int n){
    int dup = n;
    int rev=0;
    while(n > 0)
{
    int num=n %10;
    rev=(rev*10)+num;
    n=n/10;
}
if(rev == dup){
    cout<<"palindrome";
}
else{
    cout<<"not a palindrome";
}
return rev;

}
int main(){
    int n=12345;
    cout<<revNo(n);
    return 0;
}