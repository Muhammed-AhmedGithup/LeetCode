#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool judgeCircle(string moves) {
        int a=0,b=0;
        for(auto i:moves){
            if(i=='U') a++;
            else if(i=='D') a--;
            else if(i=='L') b--;
            else if(i=='R') b++;
        }
        return a==0 && b==0;
    }
};