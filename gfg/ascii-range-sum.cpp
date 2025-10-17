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
    vector<int> asciirange(string& s) {
        // code here
        vector<int> res, first(26,-1), last(26,-1);
        int n = s.size();
        
        for(int i = 0; i < n; i++) {
            if (first[s[i] - 'a'] == -1) first[s[i] - 'a'] = i;
            else last[s[i] - 'a'] = i;
        }
        
        for(int i = 0; i < 26; i++){
            if (first[i] != -1 && last[i] != -1){
                int sum = 0;
                for(int j = first[i] + 1; j < last[i]; j++) sum += (int)s[j];
                if (sum != 0) res.push_back(sum);
            }
        }
        
        return res;
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
