#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int a=1,b=1, sum=0;
    for(int i=1;i<=n;i++){
         cout<<a<<endl;
        sum=a+b;
        a=b;
        b=sum;
        
    }
   
}
