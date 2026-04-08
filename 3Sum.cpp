#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int k=-(nums[i]+nums[j]);
                if(binary_search(nums.begin(),nums.end(),k)){
                    if(k<nums[i]){
                        st.insert({k,nums[i],nums[j]});
                    }
                    else if(k>nums[j]){
                        st.insert({nums[i],nums[j],k});
                    }
                    else{
                        st.insert({nums[i],k,nums[j]});
                    }
                }
            }
        }
        for(auto it:st){
            ans.push_back(it);
        }
        
        return ans;
    }
};
