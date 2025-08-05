#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter radius: ";
    cin>>r;
    int c=2*3.141592*r;
    int a=3.141592*r*r;
    if(a>c){
    cout<<"Area>Circumference";
    }
    else if(a<c){
        cout<<"Area<Circumference";

    }
    else {
        cout<<"Area=Circumference";
    }
}