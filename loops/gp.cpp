#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n numbers: ";
    cin>>n;
    //1,2,4,8,16,32,64,--
    //2,6,18,54,---
    int a=2;
    for (int  i = 1; i <= n; i++)
    {
       cout<<a<<endl;
       a=a*3;
    }
} 

    