#include<iostream>
using namespace std;
int main(){
    int x,y;
    int *p1=&x;
    int *p2=&y;
    cout<<"enter 1st nbr: ";
    cin>>*p1;
    cout<<"enter 2nd nbr: ";
    cin>>*p2;
    cout<<*p1+*p2;

}