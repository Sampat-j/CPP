#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="raghav is at pw";
    int n = str.size();
    int len = str.length();
    cout<<n<<" "<<len<<endl;

   // push_back & pop_back
    string s = "abcd";
    cout<<s<<endl;
    s.push_back('e');
    s.push_back('f');
    s.push_back('g');
    cout<<s<<endl;

    string st="raghav";
    cout<<st<<endl;
    st.pop_back();
    st.pop_back();
    cout<<st<<endl;

    // + operater
    string p = "abc";
    cout<<p<<endl;
    string q = "def";
    p = p+q;
    cout<<p<<endl;
    p = "xyz"+p;
    cout<<p<<endl;
    p = p+"123";
    cout<<p<<endl;

    // reverse string and part of string
    string rev="abcdef";
    cout<<rev<<endl;
    reverse(rev.begin()+2,rev.end()-1);
    cout<<rev<<endl;

    
}