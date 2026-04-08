#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closest_sum=nums[0]+nums[1]+nums[2];
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            int l=i+1,r=n-1;
            
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(abs(sum-target)<abs(closest_sum-target))closest_sum=sum;

                if(target>sum)r--;
                else if(target<sum) l++;
                else{
                    return sum;
                }
                
                cout<<sum<<' ';
            }
        }
        return closest_sum;
    }
};