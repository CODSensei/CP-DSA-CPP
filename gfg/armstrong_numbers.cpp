#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<char> vc;

//Macros
#define pb push_back

// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int o = n%10;
        int t = (n/10) % 10;
        int h = (n / 100) % 10;
        
        return n == ((1LL*o*o*o) + (1LL*t*t*t) + (1LL*h*h*h));
    }
};
