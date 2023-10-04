#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target){
    int n = nums.size();

    if(n==0) 
        return 0;

    if(n==1){
        if(nums[0]>=target)
            return 0;
        if(nums[0]<target)
            return 1;    
    }

    for(int i=0; i<n; i++){
        if(nums[i]==target) 
            return i;
        if(nums[i]>target)
            return i;    
    }
    return n;
}

int main(){
    vector<int> nums;
    for(int i:nums){
        nums.push_back(i);
    }
    int target ;
    cin >> target;

    cout<< searchInsert(nums,target);

    return 0;
}