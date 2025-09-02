#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<char> vc;

//Macros
#define pb push_back

// 1st method
class Solution { public:
    bool search(vector<int>& arr, int target) {
        int l = 0, r = arr.size() - 1, m;
        while (l <= r){
            m = r + (l - r) / 2;
            if (arr[m] == target) return true;
            if (arr[l] > arr[m]){ // right partition
                if (arr[m] < target && target <= arr[r]) l = m + 1;
                else r = m - 1;
            }
            else if (arr[l] < arr[m]) { // left partition
                if (arr[l] <= target && target < arr[m]) r = m - 1;
                else l = m + 1;
            }
            else l += 1;
        }
        return false;
    }
};

// 2nd method
class Solution {
public:
    int count(vector<int>&nums, int target){
        int ans = 0;
        for(int num: nums){
            if (num >= target) ans++;
        }
        return ans;
    }

    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l = 0, r = nums.size(), mid;
        while(l <= r){
            mid = l + (r - l) / 2;
            int ans = count(nums,mid);
            if (ans == mid) return mid;
            else if (ans < mid) r = mid - 1;
            else l = mid + 1;

        }
        return -1;
        
    }
};

int main() {
    
    return 0;
}
