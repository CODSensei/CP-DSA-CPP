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
    int numJewelsInStones(string jewels, string stones) {
        vector<char> j,s;
        int count = 0;
        for(auto c: jewels) j.push_back(c);
        for(auto c: stones) s.push_back(c);
        for(int i = 0; i < j.size(); i++){
            for(int k = 0; k < s.size(); k++){
                if (j[i] == s[k]) count++;
            }
        }
        return count;
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
