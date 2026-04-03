

#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> v(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            v[i].first=nums[i];
            v[i].second=i;
        }
        int a1=0,a2=0;

        sort(v.begin(),v.end());
        for(int i=0;i<nums.size();i++){
            int d=lower_bound(v.begin(),v.end(),make_pair(target-nums[i],0))-v.begin();
            if(d!=v.size()&&v[d].second==i)d++;
            if(d!=nums.size() && v[d].first==target-nums[i] && v[d].second!=i)
            {
                a1=v[i].second;
                a2=i;
                break;
            }
        }
        return {a1,a2};
    }
};



int main()
{
   
}