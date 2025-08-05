#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);//1 1
    v.push_back(7);//2 2
    v.push_back(8);//3 4
    v.push_back(9);//4 4
    v.push_back(6);//5 8
    v.push_back(7);//6 8
    v.push_back(8);//7 8
    v.push_back(9);//8 8
    v.push_back(6);//9 16
    v.push_back(7);//10 16
    v.push_back(8);//11 16 
    v.push_back(9);//12 16
    v.push_back(6);//13 16
    v.push_back(7);//14 16
    v.push_back(8);//15 16 
    v.push_back(9);//16 16
    v.push_back(6);//17 32
    v.push_back(7);//18 32
    v.push_back(8);//19 32
    v.push_back(9);//20 32
    v.push_back(6);//21 32
    v.push_back(7);//22 32
    v.push_back(8);//23 32
    v.push_back(9);//24 32
    cout<<"size is: "<<v.size()<<endl;
    cout<<"capacity is: "<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"size is: "<<v.size()<<endl;
    cout<<"capacity is: "<<v.capacity()<<endl; 

}