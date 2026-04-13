# include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int d=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(d==nums.size())return -1;
        if(nums[d]!=target)return -1;
        else return d;
    }
};