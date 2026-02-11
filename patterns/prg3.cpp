#include<iostream>
using namespace std;
void prg3(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<"";
        }
        cout<<"\n";
    }
}
int main(){
    prg3();
    return 0;
}