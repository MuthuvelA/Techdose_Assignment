#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> fun(int row) {
        long long ans = 1;
        vector<int> p;
        p.push_back(1);
        for (int i=1;i<row;i++) {
            ans = ans*(row-i);
            ans = ans/i;
            p.push_back(ans);
        }
        return p;
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        for(int i=1;i<=n;i++) {
            ans.push_back(fun(i));
        }
    return ans;
    }
};