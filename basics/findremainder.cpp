#include<iostream>
using namespace std;
int main(){
    int a=13;
    int b=3;
    int q=a/b;
    int r;
    //a=(b*q)+r
    r=a-(b*q);
    cout<<r<<"\n";

    cout<<a%b;
}