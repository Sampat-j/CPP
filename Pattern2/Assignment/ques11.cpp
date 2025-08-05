#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter nbr of line: ";
    cin>>n;
    //2n-1 stars
    for(int i=1; i<=2*n-1; i++){
        cout<<"* ";
    }
    cout<<endl;
    int m=n-1;
    int nsp=1;
    for(int i=1; i<=m-1; i++){
        //stars
        for(int j=1; j<=m+1-i; j++){
            cout<<"* ";
        }
        //spaces
        for(int k=1;k<=nsp;k++){
            cout<<"  ";
        }
          nsp+=2;
         //stars
        for(int a=1; a<=m+1-i; a++){
            cout<<"* ";
        }
       
       cout<<endl;
    }

    //lower bridge
    nsp=2*m-1;
    for(int i=1; i<=m; i++){
        //stars
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        //spaces
        for(int k=1;k<=nsp;k++){
            cout<<"  ";
        }
          nsp-=2;
         //stars
        for(int a=1; a<=i; a++){
            cout<<"* ";
        }
       
       cout<<endl;
    }
    for(int i=1; i<=2*n-1; i++){
        cout<<"* ";
    }
    cout<<endl;
   
  
   
}