#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n numbers: ";
    cin>>n;
    // for (int i = 1; i <= 2*n-1; i+=2)
    // {
    //    cout<<i<<endl;
    // }
    //separate variable
    //1,3,5,7,9,------
    //4,7,10,13,------
    int a=4;
    for (int  i = 1; i <= n; i++)
    {
       cout<<a<<endl;
       a=a+3;
    }
    

    

}