#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if(n<=1) return 0;
        vector<bool>prime(n,true);
        int c = 0;
        for(long long i=2;i<n;i++){
            if(prime[i]){
                c++;
                for(long long j=i*i;j<n;j+=i){
                    prime[j]=false;
                }
            }
        }
        
        return c;
    }
};