#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// using 3 pointers(variables)
void sort012(vector<int>& nums){
    int low = 0;
    int mid = 0;
    int high = nums.size()-1;
    // 0 to lo-1 ->0; high to end ->2 
    while(mid<=high){
        if(nums[mid]==2){
            int temp = nums[mid];
        nums[mid] = nums[high];
        nums[high] = temp;
        high--;
        }
        else if(nums[mid]==0){
        int temp = nums[mid];
        nums[mid] = nums[low];
        nums[low] = temp;
        low++;
        mid++;
    }
    if(nums[mid]==1){
        mid++;
    }
        
    }
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
