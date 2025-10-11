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
    int maxConsecBits(vector<int> &arr) {
        // code here
        int candidate = -1, count = 0, ans = 0;
        int n = arr.size();
        for(int i: arr){
            if (i != candidate) {
                candidate = i;
                ans = max(ans, count);
                count = 1;
            }
            else if (i == candidate) {
                count++;
            }
        }
        ans = max(ans, count);
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
