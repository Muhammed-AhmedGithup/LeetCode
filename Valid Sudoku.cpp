
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //rows
        for(int i=0;i<board.size();i++){
            int f[10]={0};
            for(int j=0;j<board.size();j++){
                if(board[i][j]=='.')continue;
                f[board[i][j]-'0']++;
                if(f[board[i][j]-'0']>1){
                    return false;
                }
            }
        }
        //colums
        for(int i=0;i<board.size();i++){
            int f[10]={0};
            for(int j=0;j<board.size();j++){
                if(board[j][i]=='.')continue;
                f[board[j][i]-'0']++;
                if(f[board[j][i]-'0']>1){
                    return false;
                }

            }
        }
        //every box 3x3

        for(int i=0;i<board.size();i+=3){
            
            for(int j=0;j<board.size();j+=3){
                int f[10]={0};
                for(int k=i;k<i+3;k++){
                    for(int k1=j;k1<j+3;k1++){
                        if(board[k][k1]=='.')continue;
                        f[board[k][k1]-'0']++;
                        if(f[board[k][k1]-'0']>1){
                            return false;
                        }

                    }
                }
            }
        }

        return true;
    }
};