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
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less, equal, right;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < pivot)
                less.push_back(nums[i]);
            else if (nums[i] == pivot)
                equal.push_back(nums[i]);
            else
                right.push_back(nums[i]);
        }
        less.insert(less.end(),equal.begin(),equal.end());
        less.insert(less.end(),right.begin(),right.end());
        return less;
    }
};

int main() {
    
    return 0;
}
