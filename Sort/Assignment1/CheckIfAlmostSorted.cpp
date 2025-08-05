#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[6]={4,2,7,9,8};
    int n=5;
    int brr[5];
    for(int i=0; i<n; i++){
       brr[i]=arr[i];             //4,2,7,9,8
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
        cout<<arr[i]<<" ";        // 2,4,7,8,9
     }
     cout<<endl;
     bool flag=true;
     //brr =4,2,7,9,8
     //arr =2,4,7,8,9
     for(int i=0; i<n; i++){
        if(i==0){
            if(brr[i]!=arr[i] && brr[i]!=arr[i+1]){
                flag = false;
                break;
            }
        }
        else if(i==n-1){
            if(brr[i]!=arr[i] && brr[i]!=arr[i-1]){
                flag = false;
                break;
            }
        }
        else{
            if(brr[i]!=arr[i] && brr[i]!=arr[i+1] && brr[i]!=arr[i-1]){
                flag = false;
                break;
            }
        }

     }
     cout<<flag;
}