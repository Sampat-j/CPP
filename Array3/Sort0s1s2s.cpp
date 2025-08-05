#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void sort012(vector<int>& nums){
    int n = nums.size();
    int noz = 0;
    int noo = 1;
    int notw = 2;
    for(int i=0; i<n; i++){
        if(nums[i] == 0) noz++;
        else if(nums[i] == 1) noo++;
        else notw++;
    }
     //filling
     for(int i=0; i<n; i++){
        if(i<noz) nums[i] = 0;
        else if(i<(noz+noo)) nums[i] = 1;
        else nums[i] = 2;
    }
    return ;
}
int main(){
    vector<int> nums;
     nums.push_back(2);
     nums.push_back(0);
     nums.push_back(2);
     nums.push_back(1);
     nums.push_back(1);
     nums.push_back(0);
     for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
     }
     cout<<endl;
     sort012(nums);
      for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
     }
     cout<<endl;
  
}
