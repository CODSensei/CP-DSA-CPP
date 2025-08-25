#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<char> vc;

//Macros
#define pb push_back

// method 1
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> nums;
        int n = arr.size();
        for(int i = 0; i < 3000; i++){
            nums.push_back(i+1);
        }

        for(int i = 0; i < n; i++){
            auto new_end = remove(nums.begin(), nums.end(), arr[i]);
            while (nums.size() > (new_end - nums.begin())) {
                nums.pop_back();
            }
        }
        return nums[k - 1];
    }
};

//method 2
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start = 0, end = arr.size() - 1, ans = arr.size();
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] - mid - 1 >= k) {
                ans = mid;
                end = mid - 1;
            } else
                start = mid + 1;
        }
        return ans + k;
    }
};

int main() {
    
    return 0;
}
