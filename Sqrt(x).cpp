

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long long c=1;
        while(c*c<=x)
        {
            c++;
        }
        return c-1;
    }
};




int main()
{
   
}