#include<bits/stdc++.h>
using namespace std;

vector<int> sieve(int n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = false, prime[1] = false;
    vector<int> ans;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            ans.push_back(i);
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    return ans;
}

int countPrimes(int L, int R)
{
    if (L > R)
        return 0;
    int c = 0;

    if (L == 1)
        L = 2;

    vector<int> primes = sieve(sqrt(R));
    vector<bool> segment(R - L + 1, true);

    for (int p : primes)
    {
        int start = max(p * p, (L + p - 1) / p * p);
        for (int j = start; j <= R; j += p)
        {
            segment[j - L] = false;
        }
    }

    for (int i = 0; i < segment.size(); i++)
    {
        if (segment[i])
            c++;
    }

    return c;
}
int main()
{

    return 0;
}