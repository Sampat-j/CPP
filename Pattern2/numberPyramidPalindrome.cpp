#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter nbr of rows: ";
    cin>>n;
   for(int i=1;i<=n;i++){
    for(int j=1; j<=n-i; j++){
        cout<<" ";
        }
        for(int k=1; k<=i;k++){
            cout<<k;
        }
        for(int a=i-1; a>=1;a--){
            cout<<a;
        }
        cout<<endl;  
   
}
}

