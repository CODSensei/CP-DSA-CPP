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
    int maxFreqSum(string s) {
        vector<int> frequency(27,0);
        int vowels = 0, consonents = 0;
        for(char c: s){
            frequency[c - 'a' + 1]++;
        }
        for(int i = 1; i < frequency.size(); i++){
            if (i == 1 || i == 5 || i == 9 || i == 15 || i == 21) {
                vowels = max(vowels, frequency[i]);
                continue;
            } 
            consonents = max(consonents, frequency[i]);
        }
        return vowels + consonents;
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
