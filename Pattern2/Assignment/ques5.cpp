#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter nbr of line: ";
    cin>>n;
    //2n-1 
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    for(int i=n-1; i>=1; i--){
        cout<<i<<" ";
    }
    cout<<endl;
    int m=n-1;
    int nsp=1;
    for(int i=1; i<=m; i++){
        //stars
        int a=1;
        for(int j=1; j<=m+1-i; j++){
            cout<<a<<" ";
            a++;
        }
        //spaces
        for(int k=1;k<=nsp;k++){
            cout<<"  ";
            a++;
        }
          nsp+=2;
         //stars
        for(int j=1; j<=m+1-i; j++){
            cout<<2*n-a<<" ";
            a++;
        }
       
       cout<<endl;
    }
    
   
}