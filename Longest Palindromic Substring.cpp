#include<bits/stdc++.h>

using namespace std;



class Solution {
public:
    
    string longestPalindrome(string s) {
        string longest = "";
        int m=0;
        for(int i=0;i<s.size();i++){
            string temp="";
            string rev="";
            for(int j=i;j<s.size();j++){
                temp+=s[j];
                rev.insert(rev.begin(),s[j]);
                if(temp==rev && temp.size()>m){
                    longest=temp;
                    m=temp.size();
                }
                
            }
        }
        return longest;
    }
};