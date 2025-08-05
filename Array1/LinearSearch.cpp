#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter numbers : ";
    //input
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter the elment to be search:";
    cin>>x;
    //search
    //check mark
    bool flag=false;
    for(int i=0; i<=n-1; i++){
      if (arr[i]==x)
       flag=true;
    }
    if(flag==true) cout<<"elment is found";
    else
    cout<<"element is not found";

}