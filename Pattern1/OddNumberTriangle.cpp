#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter nbr of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        //first "i" odd nbrs
        int a=1;
       for(int j=1;j<=i;j++){
        cout<<a;
        a=a+2;
       }
       cout<<endl;
    }
}
