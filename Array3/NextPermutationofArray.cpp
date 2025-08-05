#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void reverse(vector<int>& nums,int i, int j){
    while(i<=j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        return;
    }

}
void permutation(vector<int>& nums){
    int n=nums.size();
    // 1)Finding pivot index
    int idx = -1;
    for(int i=n-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            idx = i;
            break;
        }
    }
    if(idx == -1){ // if array is already greatest
    reverse(nums, 0,n-1);
        // reverse(nums.begin(),nums.end());
        return;
    }
    //2) sorting/reverse after pivot
    reverse(nums,idx+1,n-1);
    // reverse(nums.begin()+(idx+1),nums.end());

    //Finding the just greatest element than idx
    int j = -1;
    for(int i=idx+1; i<n; i++){
        if(nums[i]>nums[idx]){
            j=i;
            break;
        }
    }
    // 4) swapping idx & j
    int temp = nums[idx];
    nums[idx] = nums[j];
    nums[j] = temp;
    return;
}
int main(){
    int n;
    cout<<"size of array: ";
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    permutation(nums);
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    
   
    
}
