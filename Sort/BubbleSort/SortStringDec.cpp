#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s= "AZYZXBYDXJK";
    string str;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
     cout<<str;
     cout<<endl;
    int n = str.size();
    for(int i=0; i<n-1; i++){
        //traverse
        bool flag=true;
        for(int j=0; j<n-1-i; j++){
            if(str[j]>str[j+1]){
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1]  = temp;
                flag=false;
            }
        }
        if(flag==true){
            break; 
        }
    }
    // sort(str.begin(),str.end());
    cout<<str;
}