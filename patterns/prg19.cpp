#include<bits/stdc++.h>
using namespace std;
void prg19(int n){
    int iniS=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        iniS+=2;
        cout<<endl;

    }
    iniS=8;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        iniS-=2;
        cout<<endl;


}
}
int main(){
    int n=5;
    prg19(n);
    return 0;
}