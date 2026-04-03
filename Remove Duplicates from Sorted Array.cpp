

#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s(nums.begin(), nums.end());
        int k=s.size();
        auto it=s.begin();
        for(int i=0;i<s.size();i++){
            nums[i]=*it;
            it++;
        }
        return s.size();
    }
};


int main()
{
   
}