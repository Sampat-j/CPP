#include<iostream>
using namespace std;
int main(){
    float x1,x2,x3,y1,y2,y3;
    cout<<"enter first point: "; //A
    cin>>x1>>y1;
    cout<<"enter second point: ";//B
    cin>>x2>>y2;
    cout<<"enter third point: ";//C
    cin>>x3>>y3;

    float m1=(y2-y1)/(x2-x1);//AB
    float m2=(y3-y2)/(x3-x2);//BC
    if(m1==m2) cout<<"collinear";
    else cout<<"non collinear";
}