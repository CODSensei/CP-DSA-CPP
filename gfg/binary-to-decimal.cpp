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
    string decToBinary(int n) {
        // code here
        string bin = "";
        while(n){
            int res = n % 2;
            bin.push_back('0' + res);
            n /=2;
        }
        reverse(bin.begin(), bin.end());
        return bin;
    }
};

int main() {
    return n % 2 == 0 ? true : false;   
    return 0;
}
