

#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        string ans="";
        bool z=1;int j=0;
        while(z&&j<strs[0].size()){
            
            for(int i=1;i<strs.size();i++){
                if(j>=strs[i].size() || j>=strs[i-1].size()){
                    z=0;
                    break;
                }
                if(strs[i][j]!=strs[i-1][j]){
                    z=0;
                    break;
                }
            }
            if(z) ans+=strs[0][j];
            j++;
        }
        if(strs.size()==1) return strs[0];
        return ans;
    }
};



int main()
{
   
}