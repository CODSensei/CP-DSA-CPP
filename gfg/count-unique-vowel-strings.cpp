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
  int fact(int n) {
      int res = 1;
      for(int i = 1; i <= n; i++) res *= i;
      return res;
  }
    int vowelCount(string& s) {
        // code here
        string vowels = "aeiou";
        unordered_map<char, int> freq;
        
        for(char c: s) 
            if (vowels.find(c) != string::npos) freq[c]++;
            
        if (freq.empty()) return 0;
        int choices = 1;
        
        for(auto entry: freq) choices *= entry.second;
        int dist = freq.size();
        return choices * fact(dist);
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
