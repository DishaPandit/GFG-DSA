//https://leetcode.com/problems/count-primes/

//TC - O(n log log n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        
        int count = 0;
        vector<bool> isPrime(n+1,true);
        for(int i = 2; i<=sqrt(n); i++)
        {
            if(isPrime[i])
            {
                for(int j = 2*i; j<=n; j=j+i)
                {
                    isPrime[j] = false;
                }
            }
        }
        
        for(int i = 2; i<n; i++)
        {
            if(isPrime[i])
                count++;
        }
        return count;
        
    }
};