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
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr;
        int first = 0, mid = n;
        while(first < n && mid < 2 * n){
            arr.push_back(nums[first]);
            arr.push_back(nums[mid]);
            first++;
            mid++;
        }
        return arr;
    }
};

int main() {
  // vector<char> test = {'a', 'b', 'f','d','A','e','q','z','y'};
  vector<int> test = {2,3,4,7,11};
  cout << findKthPositive(test, 5);
  return 0;
}
