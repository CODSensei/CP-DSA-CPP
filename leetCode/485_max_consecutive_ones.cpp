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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                ans++;
            else if (nums[i] == 0 || i == nums.size() - 1) {
                count = max(count, ans);
                ans = 0;
            }
        }
        count = max(count, ans);
        return count;
    }
};
