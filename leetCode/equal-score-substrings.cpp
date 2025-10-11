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
    bool scoreBalance(string s) {
        int left = 0, score = 0;
        for(int i = 0; i < s.size(); i++){
            left = left + s[i] - 'a' + 1;
            cout << left << "h";
        }
        score = left;
        for(int j = s.size() - 1; j >= 0; j--){
            left = left - (s[j] - 'a' + 1);
            if (left == (score / 2) && !(score & 1))
                return true;
        }
        return false;
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
