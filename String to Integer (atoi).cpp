
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        if(s.empty())return 0;
        if(isalpha(s[0]))return 0;
        string res="";
        bool flag=0 ,sign=0;
        for(int i=0;i<s.size();i++){
            if((s[i]==' ')&&!flag)continue;
            if((s[i]=='-' || s[i]=='+') && !flag){
                sign=(s[i]=='-');
                flag=1;
                continue;
            }
            if(isdigit(s[i])){
                if(s[i]=='0' && res.empty()){
                    flag=1;
                    continue;
                }
                res+=s[i];
                flag=1;
                cout<<s[i];
            }
            else break;
        }
        if(res.empty())return 0;
        if(res.size()>10){
            if(sign)return INT_MIN;
            return INT_MAX;
        }
        long long ans=stoll(res);
        if(sign)ans=-ans;
        if(ans > INT_MAX) return INT_MAX;
        if(ans < INT_MIN) return INT_MIN;
        return ans;
    }
};