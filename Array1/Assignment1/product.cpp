 #include<iostream>
#include<climits>
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
    int prod=1;
    for(int i=0; i<n; i++){
        prod*=arr[i];
    }
    cout<<prod;

}
 