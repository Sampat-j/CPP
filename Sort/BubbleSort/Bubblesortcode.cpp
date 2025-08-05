#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[6]={4,5,2,3,1,6};
    int n=6;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     /* for(int i=0; i<n-1; i++){ //n-1 passes
        // traverse in arr
        for(int j=0; j<n-1-i;j++){ //swap
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    } */

     //bubble sort optimised code
    for(int i=0; i<n-1; i++){ //n-1 passes
        // traverse in arr
        bool flag = true;
        for(int j=0; j<n-1-i;j++){ //swap
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag = false;
            }
        }
        if(flag == true){   // swap didn't happen
            break;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
     }
}