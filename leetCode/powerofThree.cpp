#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back  

class Solution {
public:
    bool isPowerOfThree(int n) {
        if ( n < 1 || n == 2) return false;
        while(n > 1){
            // cout << n << endl;
            if (n%3 == 1 || n%3 == 2) return false;
            n = n / 3;
        }
        return true;
    }
};

int main() {
  // vector<char> test = {'a', 'b', 'f','d','A','e','q','z','y'};
  // vector<int> test = {2,3,4,7,11};
  cout << Solution().isPowerOfThree(19684);
  return 0;
}
