#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
bool isPalindrome(string s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
   
}
int main(){
    string s;
    getline(cin,s);
    if(isPalindrome(s)) 
    cout<<"given string is palindrome";
    else{
        cout<<"string is not palindrome";
    }
   
}