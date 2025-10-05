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
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        for(int i = 0; i < n; i++) {
            temp.push_back(nums[i]);
        }
        if (n==0) return 0;
        int totalXor = 0;
        bool hasNonZeroElements = false;
        for(auto x: temp){
            totalXor ^= x;
            if (x != 0) hasNonZeroElements = true;
        }
        
        if (totalXor != 0)
            return n;

        if (hasNonZeroElements) return n - 1;
        else return 0;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<long long> copy_a = a;
        sort(copy_a.begin(), copy_a.end());
        if (copy_a == a || k > 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
