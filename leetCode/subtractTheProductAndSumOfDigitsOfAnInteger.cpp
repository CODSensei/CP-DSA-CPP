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
    int subtractProductAndSum(int n) {
        int rem = 0, sum = 0, product = 1;
        while(n){
            int rem = n % 10;
            sum += rem;
            product *= rem;
            n /= 10;
        }
        return product - sum;
    }
};

int main() {
  // vector<char> test = {'a', 'b', 'f','d','A','e','q','z','y'};
  vector<int> test = {2,3,4,7,11};
  cout << findKthPositive(test, 5);
  return 0;
}
