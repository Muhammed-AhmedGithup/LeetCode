#include <bits/stdc++.h>

using namespace std;



class Solution {
public:
    int reverse(int x) {
        long long v= 0;
        if(x<0) v=(long long)-1 *x;
        else v=x;
        string s = to_string(v),s1="";
        for (int i = s.size() - 1; i >= 0; i--) {
            s1 += s[i];
        }
        long long res = stoll(s1);
        if(x<0) res=-res;
        if (res > INT_MAX || res < INT_MIN) return 0;
        return res;
    }
};