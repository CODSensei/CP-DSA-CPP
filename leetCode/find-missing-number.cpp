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
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans, temp;
        int n = nums.size(), i = 0, j = 0;
        sort(nums.begin(), nums.end());
        for(int i = nums[0]; i <= nums[n - 1]; i++){
            temp.push_back(i);
        }
        int n2 = temp.size();
        while((i < n) && (j < n2)){
            if(nums[i] == temp[j]) {
                i++; j++;
            } else {
                ans.push_back(temp[j]);
                j++;
            }
        }
        sort(ans.begin(),ans.end());
        if (ans.size()) return ans;
        return {};
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
