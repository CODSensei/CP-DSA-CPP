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
    void print_divisors(int n) {
        vector<int> arr;
        for(int i = 1; i <= sqrt(n); i++) {
            if ((n%i == 0) && (n/i != i)) {
                arr.push_back(i);
                arr.push_back(n/i);
            } else if ((n%i == 0) && (n/i == i)) arr.push_back(i);
        }
        sort(arr.begin(),arr.end());
        for(auto i: arr) cout << i << " ";
    }
};
