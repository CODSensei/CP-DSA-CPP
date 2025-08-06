#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Type defined
typedef vector<long long> vll;
typedef vector<int> vi;

//Macros
#define pb push_back  

// 1st method
class Solution {
public:
    int mySqrt(int x) {
        for(int i = 1; i <= x; i++){
            if (i > INT_MAX / i || i * i > x) return i - 1;
            if (i * i == x) return i;
        }
        return 0;
    }
};

//2nd method
class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;
        int start = 0, end = x, mid, ans = 0;
        while(start <= end){
            mid = start + (end - start) / 2;
            if (mid == x / mid) {
                ans = mid;
                break;
            }
            else if (mid < x / mid) {
                ans = mid;
                start = mid + 1;
            }  
            else {
                end = mid - 1;
            }

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