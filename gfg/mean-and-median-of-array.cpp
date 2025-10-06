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
    int mean(vector<int>& arr) {
        // code here
        int sum = 0;
        for(int i = 0; i < arr.size(); i++) sum+=arr[i];
        return floor(sum/arr.size());
    }

    int median(vector<int>& arr) {
        // code here
        int j = arr.size();
        sort(arr.begin(), arr.end());
        if (j & 1) return arr[j/2];
        else return floor((arr[j/2] + arr[(j / 2) - 1]) / 2);
        
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
