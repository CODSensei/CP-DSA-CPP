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
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int start = 0, end = 0, mid, ans;
        long long sum = 0;
        for (auto i : piles) {
            sum += i;
            end = max(end, i);
        }
        start = sum / h;
        if(!start) start = 1;
        while (start <= end) {
            mid = start + (end - start) / 2;
            int totalHours = 0;
            for (int i = 0; i < n; i++) {
                totalHours += piles[i] / mid;
                if (piles[i]%mid) totalHours++;
            }
            if (totalHours > h)
                start = mid + 1;
            else {
                end = mid - 1;
                ans = mid;
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
