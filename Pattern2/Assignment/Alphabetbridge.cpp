#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter nbr of line: ";
    cin>>n;
    //2n-1 stars
    for(int i=1; i<=2*n-1; i++){
        cout<<(char)(i+64);
    }
    cout<<endl;
    int m=n-1;
    int nsp=1;
    for(int i=1; i<=m; i++){
        //stars
        int a=1;
        for(int j=1; j<=m+1-i; j++){
            cout<<(char)(a+64);
            a++;
        }
        //spaces
        for(int k=1;k<=nsp;k++){
            cout<<" ";
            a++;
        }
          nsp+=2;
         //stars
        for(int j=1; j<=m+1-i; j++){
            cout<<(char)(a+64);
            a++;
        }
       
       cout<<endl;
    }
    
   
}