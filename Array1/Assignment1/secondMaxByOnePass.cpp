#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[] ={1,-3,2,5,-2,6,3};
int n = sizeof(arr)/4;
int mx = INT_MIN;
int smx = INT_MIN;
for (int  i = 0; i <n; i++)
{
   if(arr[i]>mx) {
    smx=mx;
    mx = arr[i];
   }
   else{
    smx = max(smx,arr[i]);
   }
}
cout<<mx<<endl;
if(smx==INT_MIN) cout<<"no second largest element";
else
cout<<smx;


}
 