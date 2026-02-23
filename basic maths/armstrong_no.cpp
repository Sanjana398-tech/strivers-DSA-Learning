#include<bits/stdc++.h>
using namespace std;
int armstrong(int n){
    int dup = n;
    int sum = 0;
    while(n > 0)
{
    int num=n %10;
    sum+=(num*num*num);
    n=n/10;
}
if(sum == dup){
    cout<<"armstrong number";
}
else{
    cout<<"not a armstrong number";
}
return sum;


}
int main(){
    int n=371;
    cout<<armstrong(n);
    return 0;
}