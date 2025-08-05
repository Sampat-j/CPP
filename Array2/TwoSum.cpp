#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"target: ";
    cin>>x;
    vector<int> v;
    int n;
    cout<<"array size: ";
    cin>>n;
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
            cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> v;
        
//         for(int i=0;i<=nums.size()-2;i++){
//             for(int j=i+1; j<=nums.size()-1;j++){
//                 if(nums[i]+nums[j]==target){
//                     v.push_back(i);
//                     v.push_back(j);
//                 }
                 
                  
//             }
//         }
//         return v;
//     }
// };