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
    int longestSubarray(vector<int>& nums) {
        int ans = 2, curr = 0, actual = 0;
        int n = nums.size();
        for(int i = 2; i < nums.size(); i++){
            if (nums[i-2] + nums[i - 1] == nums[i]) {
                curr++;
            }
            else if (nums[i - 2] + nums[i - 1] != nums[i]) {
                actual = max(actual, curr);
                curr = 0;
            }
        }
        actual = max(curr, actual);
        return ans + actual;
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
