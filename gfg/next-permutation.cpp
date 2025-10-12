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
    void nextPermutation(vector<int>& arr) {
        // code here
        next_permutation(arr.begin(), arr.end());
    }
};

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int n = arr.size();
        int pivot = -1;
        
        for(int i = n - 2; i >= 0; i--){
            if (arr[i] < arr[i + 1]) {
                pivot = i;
                break;
            }
        }
        
        if (pivot == -1) {
            reverse(arr.begin(), arr.end());
            return;
        }
        
        for(int i = n - 1; i > pivot; i--){
            if (arr[i] > arr[pivot]) {
                swap(arr[i], arr[pivot]);
                break;
            }
        }
        
        reverse(arr.begin() + pivot + 1, arr.end());
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
