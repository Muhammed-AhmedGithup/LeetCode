# include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        set<vector<int>>st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int l=j+1,r=n-1;
                while(l<r){
                    long long sum=(long long)nums[i]+nums[j]+nums[l]+nums[r];
                    if(sum==target)st.insert({nums[i],nums[j],nums[l],nums[r]});
                    if(sum<target)l++;
                    else r--;
                }
            }
        }
        for(auto i:st)ans.emplace_back(i);
        return ans;
    }
};