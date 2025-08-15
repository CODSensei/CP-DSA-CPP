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
    bool isPowerOfFour(int n) {
        if (n < 4 && n != 1) return false;
        while (n%4 == 0){
            if (n%4 == 0) n/=4;
        }
        if (n == 1) return true;
        return false;
    }
};

int main() {
  // vc test = {'a', 'b', 'f','d','A','e','q','z','y'};
  // vi test = {2,3,4,7,11};
  cout << Solution().largestGoodInteger("6777133339");
  return 0;
}
