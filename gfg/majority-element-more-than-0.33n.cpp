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
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        int n = arr.size(), ele1 = -1, ele2 = -1, cnt1 = 0, cnt2 = 0;
        vector<int> ans;
        for(int ele: arr){
            if (ele1 == ele) cnt1++;
            else if (ele2 == ele) cnt2++;
            else if (cnt1 == 0) {
                ele1 = ele;
                cnt1++;
            }
            else if (cnt2 == 0){
                ele2 = ele;
                cnt2++;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for(int ele: arr) {
            if (ele1 == ele) cnt1++;
            if (ele2 == ele) cnt2++;
        }
        
        if (cnt1 > n/3) ans.push_back(ele1);
        if (cnt2 > n/3 && ele1 != ele2) ans.push_back(ele2);
        
        if(ans.size() == 2 && ans[0] > ans[1]) swap(ans[0], ans[1]);
        
        return ans;
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
