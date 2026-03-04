#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    int left=0,right=s.length() -1;

    while(left<right){
        if(!isalnum(s[left]))
    left++;
else if(!isalnum(s[right]))
right--;
else if(tolower(s[left]) != tolower(s[right]))
    return false;
else{
left++;
right--;
    }}
    return true;

}
int main(){
    string str="ABCDCBb";
    bool ans=isPalindrome(str);
    cout<<(ans==true?"Palindrome":"Not a Palindrome")<<endl;
    return 0;

}