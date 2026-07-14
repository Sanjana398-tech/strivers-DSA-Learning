#include<iostream>
using namespace std;
int pascalElement(int r,int c){
    int n=r-1;
    int k=c-1;
    int ans=1;
    for(int i=0;i<k;i++){
        ans=ans*(n-i);
        ans=ans/(i+1);
    }
    return ans;
}
int main(){
    int r=5;
    int c=3;
    cout<<pascalElement(r,c);
    return 0;
}