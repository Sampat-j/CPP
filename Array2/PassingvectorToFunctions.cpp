#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int change(vector<int> a){ //a --> 9 6 1 10
    a[0]=100;              //a --> 100 6 1 10
    for(int i=0; i<a.size(); i++){
    cout<<a[i]<<" ";
   }
   cout<<endl;
}
int change2(vector<int> &b){
    b[2]=50;
}
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(6);
    v.push_back(1);
    v.push_back(10);
   
   for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
   change(v);
   change2(v);
   for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
   }
}
