#include<iostream>
using namespace std;
void prg2(){
    for(int i=4;i>=0;i--){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
int main(){
    prg2();
    return 0;
}