#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int f[200]={0};
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        int l=0,r=1;
        int ans=1;
        f[s[0]]=1;
        while(r<s.size()){
            if(f[s[r]]==0){
                f[s[r]]=1;
                r++;
                ans=max(ans,r-l);
            }
            else{
                f[s[l]]=0;
                l++;
            }
        }
        return ans;
    }
};