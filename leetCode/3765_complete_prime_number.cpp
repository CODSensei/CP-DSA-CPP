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
    bool isPrime(int x) {
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
    bool completePrime(int num) {
        if (num < 10 && isPrime(num))
            return true;
        string s = to_string(num);
        if (isPrime(num)) {
            for (int i = 1; i <= s.size(); i++) {
                if (!isPrime(stoi(s.substr(0, i)))) {
                    return false;
                }
            }
            for (int i = 0; i < s.size(); i++) {
                if (!isPrime(stoi(s.substr(i))))
                    return false;
            }
            return true;
        }
        return false;
    }
};
