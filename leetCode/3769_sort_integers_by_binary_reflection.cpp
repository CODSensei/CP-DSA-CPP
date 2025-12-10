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
    int binaryReflection(int n) {
        int reflection = 0;
        while (n) {
            reflection = reflection * 2 + (n & 1);
            n >>= 1;
        }
        return reflection;
    }
    vector<int> sortByReflection(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            int refA = binaryReflection(a);
            int refB = binaryReflection(b);
            return refA == refB ? a < b : refA < refB;
        });
        return nums;
    }
};
