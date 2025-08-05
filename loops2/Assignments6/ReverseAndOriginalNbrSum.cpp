#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int a=n;//save the value of n
    int sum=0;
    int r=0;
    while (n>0)
    {
        int ld=n%10;
        r=r*10;
        r=r+ld;
        n/=10;
       
    }
    cout<<"sum of reverse and original nbr is : "<<a+r;
}