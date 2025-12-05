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
    // My Solution - O(n^2)
    int countPartitions(vector<int>& nums) {
        int count = 0, n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            int suml = 0, sumr = 0;
            for (int j = 0; j <= i; j++)
                suml += nums[j];
            for (int j = i + 1; j < n; j++)
                sumr += nums[j];
            if ((sumr - suml) % 2 == 0)
                count++;
        }
        return count;
    }

    // O(n) solution
    int countPartitions(vector<int>& nums) {
        int totalSum = 0;
        for (int x : nums) {
            totalSum += x;
        }
        return totalSum % 2 == 0 ? nums.size() - 1 : 0;
    }
};
