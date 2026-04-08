#include<bits/stdc++.h>

using namespace std;



class Solution {
public:
    string turn_left(string direction){
        if(direction == "N") return "W";
        else if(direction == "W") return "S";
        else if(direction == "S") return "E";
        else return "N";

    }
    string turn_right(string direction){
        if(direction == "N") return "E";
        else if(direction == "E") return "S";
        else if(direction == "S") return "W";
        else return "N";

    }
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        string direction = "N";
        int x = 0, y = 0;
        set<pair<int,int>> st;
        for(auto it: obstacles){
            st.insert({it[0], it[1]});
        }
        int max_distance = 0;
        for(auto i:commands){
            if(i == -1){
                direction = turn_right(direction);
            }
            else if(i == -2){
                direction = turn_left(direction);
            }
            else{
                if(direction == "N"){
                    for(int j=0; j<i; j++){
                        if(st.find({x, y+1}) != st.end()){
                            break;
                        }
                        y++;
                    }
                }
                else if(direction == "S"){
                    for(int j=0; j<i; j++){
                        if(st.find({x, y-1}) != st.end()){
                            break;
                        }
                        y--;
                    }
                }
                else if(direction == "E"){
                    for(int j=0; j<i; j++){
                        if(st.find({x+1, y}) != st.end()){
                            break;
                        }
                        x++;
                    }
                }
                else{
                    for(int j=0; j<i; j++){
                        if(st.find({x-1, y}) != st.end()){
                            break;
                        }
                        x--;
                    }
                }
                max_distance = max(max_distance, x*x + y*y);
            }
            
        }
        return max_distance;

    }
};