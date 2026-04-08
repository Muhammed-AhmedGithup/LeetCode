# include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string>ans;
    map<char,string>f;

    void get_all(int i,string cur, string &s){
        if(i==s.size()){
            ans.emplace_back(cur);
            return;
        }
        string s_d=f[s[i]];
        for(int j=0;j<s_d.size();j++){
            get_all(i+1,cur+s_d[j],s);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        f['2']="abc";
        f['3']="def";
        f['4']="ghi";
        f['5']="jkl";
        f['6']="mno";
        f['7']="pqrs";
        f['8']="tuv";
        f['9']="wxyz";
        get_all(0,"",digits);
        return ans;

    }
};