#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str="ragav garg is ";
    // cout<<str;
   string s;
//    cin>>s; //only if the gien string has no space
    getline(cin,s);
   cout<<s<<endl;
   cout<<s[0];
}