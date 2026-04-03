

#include<bits/stdc++.h>

using namespace std;



class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> x;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                x.push_back(nums[i]);
            }
        }
        for(int i=0;i<x.size();i++){
            nums[i]=x[i];
        }
        return x.size();
    }
};


int main()
{
   
}