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
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int n = stalls.size();
        int start = 1, end, mid, ans;
        sort(stalls.begin(), stalls.end());
        end = stalls[n - 1] - stalls[0];
        while(start <= end){
            mid = start + (end - start) / 2;
            int count = 1, pos = stalls[0];
            for(int i = 1; i < n; i++){
                if (pos + mid <= stalls[i]) {
                    count++;
                    pos = stalls[i];
                }
            }
            if (count < k) end = mid - 1;
            else {
                ans = mid;
                start = mid + 1;
            }
        }
        
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
