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
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int start = 0, end = arr.size() - 1, mid,ans = -1;
        while(start <= end){
            mid = start + (end - start) / 2;
            if (arr[mid] == k) {
                ans = mid;
                end = mid - 1;
            } else if (arr[mid] > k) end = mid - 1;
            else start = mid + 1;
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
