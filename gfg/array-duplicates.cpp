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
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> temp(n + 1,0), ans;
        for(int i = 0; i < n; i++){
            temp[arr[i]]++;
        }
        for(int i = 0; i < temp.size(); i++){
            if(temp[i] == 2)
                ans.push_back(i);
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
