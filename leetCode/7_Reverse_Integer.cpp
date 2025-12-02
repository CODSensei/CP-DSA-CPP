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
    int reverse(int x) {
        int rem = 0, ans = 0;
        while(x) {
            int rem = x % 10;
            x /= 10;
            if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) return 0;
            ans = ( ans * 10) + rem;
        }
        return ans;
    }
};
