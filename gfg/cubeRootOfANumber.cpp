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
    int cubeRoot(int n) {
        // code here
        if (n < 8) return 1;
        int start = 1, end = n, ans = 1;
        long long int mid;
        while(start <= end){
            mid = start + (end - start) / 2;
                if (mid * mid * mid == n ){
                    ans = mid;
                    break;
                } else if (mid * mid * mid < n ) {
                    ans = mid;
                    start = mid + 1;
                } else end = mid - 1;
            }
        return ans;
    }
};

int main() {
  // vector<char> test = {'a', 'b', 'f','d','A','e','q','z','y'};
  vector<int> test = {8, 3, 0,1,9,4,2,5,6};
  binarySearch(test, 9);
  return 0;
}