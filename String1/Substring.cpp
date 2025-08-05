#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    // substr(idx,len)
    cout<<str.substr(2,4)<<endl;
    string s;
    cin>>s;
    int n=s.length();
    cout<<s.substr(n/2);

}