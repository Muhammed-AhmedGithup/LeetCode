
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void count_c(int i,string &s,int &n){
        if(i==n)return;
        int f[10]={0};
        string s1="";
        for(int j=0;j<s.size();j++){
            f[s[j]-'0']++;
            if(j+1==s.size()){
                s1+=to_string(f[s[j]-'0'])+s[j];
                break;
            }
            if(s[j]!=s[j+1]){
                s1+=to_string(f[s[j]-'0'])+s[j];
                f[s[j]-'0']=0;
            }
        }
        s=s1;
        count_c(i+1,s,n);
    }
    string countAndSay(int n) {
        string s="1";
        count_c(1,s,n);
        return s;
    }
};