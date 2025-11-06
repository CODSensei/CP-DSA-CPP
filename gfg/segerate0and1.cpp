#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;
typedef vector<char> vc;

//Macros
#define pb push_back

// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int start = 0, end = arr.size() - 1;
        while(start <= end){
            if (arr[start] == 0) start++;
            else {
                if (arr[end] == 0) {
                swap(arr[start],arr[end]);
                start++;
                end--;
                } else end--;
            }
        }
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
