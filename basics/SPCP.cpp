#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter cost price: ";
    cin>>cp;
    cout<<"enter selling price: ";
    cin>>sp;
    if(sp>cp){
        cout<<"profit: "<<sp-cp;
    }
    else if (sp<cp)
    {
      cout<<"loss: "<<cp-sp;
    }
    else{
        cout<<"no loss,no profit";
}
    
}