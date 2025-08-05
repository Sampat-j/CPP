#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(6);
    v.push_back(1);
    v.push_back(10);
    // v.at(2) = 15;
    // cout<<v[2]<<endl;
    // cout<<v.at(3)<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
      //sor
     sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
}
