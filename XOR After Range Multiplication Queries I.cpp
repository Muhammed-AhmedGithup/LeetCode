
# include <bits/stdc++.h>

using namespace std;




class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(auto q:queries){
            int l=q[0],r=q[1],k=q[2];
            long long v=q[3];
            while(l<=r){
                long long val=(nums[l]*v)%((int)1e9+7);
                nums[l]=val;
                l+=k;
            }
        }
        long long ans=0;
        for(auto i:nums)ans^=i;

        return ans;
    }
};