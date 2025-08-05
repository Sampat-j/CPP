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
    int x;
    cout<<"given number: ";
    cin>>x;
    int count=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"total nbrs greater than "<<x<<" are: "<<count<<endl;
}
 