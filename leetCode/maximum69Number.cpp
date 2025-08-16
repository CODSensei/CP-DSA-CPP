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
    int maximum69Number (int num) {
        vector<int> v;
        int ans = 0;
        while(num){
            int rem = num % 10;
            v.push_back(rem);
            num /= 10;
        }
        reverse(v.begin(),v.end());
        for(int i = 0; i < v.size(); i++){
            if (v[i] == 6) {
                v[i] = 9;
                break;
            }
        }
        for(int i: v){
            ans = ans*10 + i;
        }
        return ans;
    }
};

int main() {
  // vc test = {'a', 'b', 'f','d','A','e','q','z','y'};
  // vi test = {2,3,4,7,11};
  cout << Solution().largestGoodInteger("6777133339");
  return 0;
}
