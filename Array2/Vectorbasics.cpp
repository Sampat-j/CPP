#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;    //we need not to mention the size
     // when inserting/input taking time do not use -> []
    v.push_back(6);
    cout<<v.capacity()<<" "<<v.size()<<endl;
    v.push_back(7);
    cout<<v.capacity()<<" "<<v.size()<<endl;
    v.push_back(8);
    cout<<v.capacity()<<" "<<v.size()<<endl;
    v.push_back(9);
    cout<<v.capacity()<<" "<<v.size()<<endl;

     //if we want to update / access we can use []
     v[0]=25;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

}