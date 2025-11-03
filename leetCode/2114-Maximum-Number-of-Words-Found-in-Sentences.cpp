#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<char> vc;

//Macros
#define pb push_back

// 1st method
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size(), ans = 0;
        vector<string> individual;
        vector<int> wordCount;
        for(auto c: sentences){
            individual.push_back(c);
        }
        for(auto c: individual){
            int count = 0;
            for(int i = 0; i < c.size(); i++){
                if(c[i] == ' ' || i == c.size() - 1) 
                    count++;
            }
            wordCount.push_back(count);
        }

        for(auto i: wordCount) {
            ans = max(ans, i);
        }
        return ans;
    }
};

// 2nd method
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size(), ans = 0;
        for(auto c: sentences){
            int count = 0;
            for(int i = 0; i < c.size(); i++){
                if(c[i] == ' ' || i == c.size() - 1) 
                    count++;
            }
            ans=max(ans,count);
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
