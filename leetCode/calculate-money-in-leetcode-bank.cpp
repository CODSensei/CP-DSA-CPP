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
    int totalMoney(int n) {
        int t = n, ans = 0;
        for (int i = 0; i <= n / 7; i++) {
            int k = i + 1; // monday
            if (t / 7 == 0)
                for (int j = 0; j < t; j++)
                    ans += k++;
            else {
                for (int j = 0; j < 7; j++)
                    ans += k++;
                t -= 7;
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
