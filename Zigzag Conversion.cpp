#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void settov(int i,int j,int sindx,int &numberofrows,vector<vector<char>>&v,string &s,int c){
        if(sindx>=s.size() ) return; 
        if(c==0){
            if(i+1<numberofrows){
                v[i][j]=s[sindx];
                settov(i+1,j,sindx+1,numberofrows,v,s,c);
            }
            else{
                v[i][j]=s[sindx];
                settov(i-1,j+1,sindx+1,numberofrows,v,s,c^1);
            }
        } 
        else{
            if(i-1>=0){
                v[i][j]=s[sindx];
                settov(i-1,j+1,sindx+1,numberofrows,v,s,c);
            }
            else{
                v[i][j]=s[sindx];
                settov(i+1,j,sindx+1,numberofrows,v,s,c^1);
            }
        }    
    }
    string convert(string s, int numRows) {
        vector<vector<char>>v(numRows,vector<char>((int)1e4,'0'));
        if(numRows==1) return s;
        settov(0,0,0,numRows,v,s,0);
        string ans="";
        for(int i=0;i<numRows;i++){
            for(int j=0;j<(int)1e4;j++){
                if(v[i][j]!='0') ans+=v[i][j];
            }
        }
        return ans;
    }
};