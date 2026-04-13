
# include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string>ans;

    void get_all(int i,int j,string s,int &n){
        if(s.size()==2*n){
            ans.emplace_back(s);
            return;
        }
        if(i<n)get_all(i+1,j,s+'(',n);
        if(j<i)get_all(i,j+1,s+')',n);

    }
    vector<string> generateParenthesis(int n) {
        get_all(0,0,"",n);
        return ans;
    }
};