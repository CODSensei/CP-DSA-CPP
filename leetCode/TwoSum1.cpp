#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back

//My Solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> v;
       int n = nums.size();
       for(int i = 0; i < n-1; i++){
            for(int j = i+1; j<n; j++) {
                if (nums[i] + nums[j] == target) {
                    v.push_back(i);
                    v.push_back(j);
                }
            }
       }
       return v;
    }
};