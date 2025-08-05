#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter nbr of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i; j>=1; j--){
            cout<<(char)(j+64)<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
  
}

