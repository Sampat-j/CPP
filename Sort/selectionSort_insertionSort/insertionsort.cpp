#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,3,1,2,4};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //insertion sort
    for(int i= 0; i<n;i++){
        int j=i;
       /* while(j>=1){
            if(arr[j]>=arr[j-1]) break;
            else swap(arr[j],arr[j-1]);
            j--;
        } */
       while(j>=1 && arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
       }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
