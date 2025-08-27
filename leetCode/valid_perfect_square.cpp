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
    bool isPerfectSquare(int num) {
       
        int l = 1, r = num, mid;
        while (l <= r){
            mid = l + (r - l) / 2;
            // 1LL make it long long for the instance
            if (1LL* mid* mid == num) return true;
            else if (1LL*mid * mid > num) r = mid - 1;
            else l = mid + 1;
        }

        return false;
    }
};

int main() {
    
    return 0;
}
