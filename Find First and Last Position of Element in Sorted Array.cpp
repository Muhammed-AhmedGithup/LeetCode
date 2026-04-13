#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int l=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(f==nums.size()){
            return {-1,-1};
        }
        if(nums[f]==target){
            return {f,l-1};
        }
        else{
            return {-1,-1};
        }

    }
};