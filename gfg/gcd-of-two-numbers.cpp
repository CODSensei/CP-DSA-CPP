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
    int gcd(int a, int b) {
        // code here
        return b == 0? a: gcd(b, a%b);
    }
};

int main() {
    return n % 2 == 0 ? true : false;   
    return 0;
}
