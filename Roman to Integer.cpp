

#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        vector<char>v={'I','V','X','L','C','D','M'};
        map<char,int> mp,ind;
        for(int i=0;i<v.size();i++){
            ind[v[i]]=i;
        }
        
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        for(int i=0;i<s.size();i++){
            bool z=0;
            if(i+1<s.size()){
                for(int j=ind[s[i]]+1;j<v.size();j++){
                    if(s[i+1]==v[j]){
                        ans+=mp[v[j]]-mp[s[i]];
                        i++;
                        z=1;
                        break;
                    }
                }
            }
            if(!z){
                ans+=mp[s[i]];
            }
        }
        return ans;
    }
};



int main()
{
   
}