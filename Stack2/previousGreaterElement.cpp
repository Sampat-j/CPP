#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {3,1,2,5,4,6,2,3};
    const int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Previous Greater Element
    int pge[n];     

    // //Brute forcre T.C=O(n^2) S.C=O(1)
    // for(int i=0; i<n; i++){
    //     pge[i] = -1;
    //     for(int j=0; j<=i; j++){
    //         if(arr[j]>arr[i]){
    //             pge[i] = arr[j];
    //         }
    //     }
    // }

    //Using a Stack: pop, ans, push & forward traverse
    //TC=O(n)  SC=O(n)  
    stack<int> st;
    pge[0] = -1;
    st.push(arr[0]);
    for(int i=1; i<n; i++){
        //pop all the elements smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        //mark the ans in pge[i]
        if(st.size()==0) pge[i] = -1;
        else pge[i] = st.top();
        //push the arr[i]
        st.push(arr[i]); 
    }

    for(int i=0; i<n; i++){
        cout<<pge[i]<<" ";
    }
    cout<<endl;
}