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
    int sumOfDigits(int n) {
        // code here
        int rem, ans = 0;
        while (n) {
            rem = n % 10;
            n /= 10;
            ans += rem;
        }
        return ans;
    }
};

int main() {
    return n % 2 == 0 ? true : false;   
    return 0;
}
