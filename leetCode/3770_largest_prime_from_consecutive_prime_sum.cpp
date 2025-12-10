#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<char> vc;

//Macros
#define pb push_back

class Solution {
public:
    int isPrime(int x) {
        if (x == 1)
            return false;
        if (x == 2)
            return true;
        if (x % 2 == 0)
            return false;
        for (long long i = 3; i * i <= x; i += 2) {
            if (x % i == 0)
                return false;
        }
        return true;
    }
    int largestPrime(int n) {
        int sum = 0, ans = 0;
        for (int i = 1; i <= n; i++) {
            if (sum <= n && isPrime(i)) {
                sum += i;
            } else
                continue;
            if (!isPrime(sum)) {
                continue;
            } else if (sum <= n && ans <= n)
                ans = sum;
        }
        return ans;
    }
};
