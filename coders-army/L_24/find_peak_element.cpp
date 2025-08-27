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
    int findPeakElement(vector<int>& nums) {
        int start = 0, end = nums.size() - 1, mid, ans = 0;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (mid < (nums.size() - 1) && nums[mid] < nums[mid + 1] ) {
                start = mid + 1;
            } else if (mid > 0 &&nums[mid] < nums[mid - 1]) {
                end = mid - 1;
            } else
                return mid;
        }
        return 0;
    }
};

int main() {
    
    return 0;
}
